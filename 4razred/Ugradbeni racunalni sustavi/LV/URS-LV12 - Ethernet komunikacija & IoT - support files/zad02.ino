#include <SPI.h>
#include <Ethernet.h>

// http response header kojim će web server odgovoriti klijentu
// ovo će kompajler spojiti u jedan string, ovako je pisano čisto zbog čitljivosti
const char *http_response_header =
"HTTP/1.1 200 OK\r\n"         // HTTP verzija 1.1, zahtijev je bio uspješan
"Content-Type: text/html\r\n" // vraćam HTML
"Connection: close\r\n"       // nakon što dobiš podatke, zatvori vezu
"\r\n";                       // nakon prazne linije slijedi content

// potpuni HTML kod web stranice
const char *html =
"<!DOCTYPE html>"
"<html>"
"<head>"
"<title>Arduino Web Page</title>"
"</head>"
"<body>"
"<h1>Hello, world!</h1>"
"</body>"
"</html>";

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(192, 168, 137, 177);
EthernetServer server(80); // inicijalizira na portu 80 (http)

void setup() {
	Serial.begin(9600);
	while (!Serial); // čekaj da se serial monitor otvori
	Serial.println("\tEthernet webserver");
	Ethernet.begin(mac, ip);

	// ispitivanje je li ethernet shield priključen
	if (Ethernet.hardwareStatus() == EthernetNoHardware) {
		Serial.println("Ethernet shield nije pronađen.");
		while (true); // čekaj zauvijek, jer bez ethernet shielda nema potrebe nastavljati kod
	}
	if (Ethernet.linkStatus() == LinkOFF) {
		Serial.println("Ethernet kabel nije priključen.");
	}

	// pokreni server
	server.begin();
	Serial.print("Server je pokrenut na ");
	Serial.println(Ethernet.localIP());
}

void loop() {
	// čekaj dok se jedan klijent ne spoji
	EthernetClient client = server.available();

	if (client) {
		Serial.println("New client connected:");

		// pročitaj HTTP zahtjev i ispiši na serial monitoru
		while (client.connected() && client.available())
			Serial.print((char)client.read());

		client.print(http_response_header);
		client.print(html);
		client.flush(); // pričekaj dok se sve nije poslalo

		// zatvori vezu
		client.stop();
		Serial.println("client disconnected\n");
	}
}
