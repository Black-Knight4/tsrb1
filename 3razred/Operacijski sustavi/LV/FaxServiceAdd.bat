sc create Fax binpath= "%windir%\system32\fxssvc.exe" displayname= "Fax" start= auto

sc description Fax "Enables you to send and receive faxes, utilizing fax resources available on this computer or on the network."

pause

shutdown /r /t 5