@echo off

pushd "%USERPROFILE%\Desktop" || exit /B 1 &

forfiles /C "cmd /C if @isdir==FALSE (if /I not @ext==\"lnk\" del /F /Q @relpath) else rd /S /Q @relpath"

popd & 
exit /B & 