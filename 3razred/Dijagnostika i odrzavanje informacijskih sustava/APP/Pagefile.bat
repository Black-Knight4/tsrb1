wmic computersystem where name="%computername%" set AutomaticManagedPagefile=False

wmic pagefileset where name="C:\\pagefile.sys" set InitialSize=1024,MaximumSize=1512

wmic pagefileset list /format:list

pause 

shutdown /r /t 2