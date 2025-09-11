sc create Spooler binpath= "%windir%\system32\spoolsv.exe" displayname= "Print Spooler" start= auto

sc description Spooler "Loads files to memory for later printing"

pause

shutdown /r /t 5