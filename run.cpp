#include <filesystem>
#include <iostream>
#include <vector>
#include <algorithm>

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
	bool hasLast = false;
	std::string last;
	fs::path current = (argc > 1) ? fs::path(argv[1]) : fs::current_path();

	while (true)
	{
		system("cls");
		std::vector<fs::directory_entry> items;
		items.reserve(64);

		for (const auto& e : fs::directory_iterator(current))
			items.push_back(e);

		std::sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
			if (a.is_directory() != b.is_directory())
				return a.is_directory();
			return a.path().filename() < b.path().filename();
			});

		if (current.has_parent_path())
			std::cout << "0) ..\n";

		for (std::size_t i = 0; i < items.size(); ++i) {
			const auto& p = items[i].path();
			std::cout << i + 1 << ") "
				<< p.filename().string()
				<< (items[i].is_directory() ? "/" : "")
				<< '\n';
		}

		std::size_t choice{};
		if (!(std::cin >> choice)) {
			std::cerr << "Invalid input. Exiting.\n";
			return 1;
		}

		if (choice == -1) {
			if (hasLast) {
				system("cls");
				system(last.c_str());
				system("out.exe");
				printf("\n\n");
				system("pause");
			}
			continue;
		}

		if (choice == -2) {
			break;
		}

		if (choice == 0 && current.has_parent_path()) {
			current = current.parent_path();
			continue;
		}

		if (choice < 1 || choice > items.size()) {
			std::cout << "Out of range.\n";
			continue;
		}

		const fs::directory_entry& selected = items[choice - 1];

		if (selected.is_directory()) {
			current = selected;
		}
		else {
			std::cout << "\nYou picked file: " << selected.path().filename().string() << "\n";

			fs::path fullPath = current / selected.path().filename();

			std::string quotedPath = "\"" + fullPath.string() + "\"";
			std::string command = "gcc " + quotedPath + " -o out.exe";
			hasLast = true;
			last = command;
			system("cls");
			system(command.c_str());
			system("out.exe");
			printf("\n\n");
			system("pause");
		}
	}
	return 0;
}
