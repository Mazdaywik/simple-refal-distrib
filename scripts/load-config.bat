if not "%CPPLINEE%" == "" exit /b 0

set CONFIG_FILE="%~dp0..\c-plus-plus.conf.bat"
if not exist %CONFIG_FILE% copy "%~dp0c-plus-plus.conf.bat.template" %CONFIG_FILE% >NUL

set DEFFILE=%~dp0..\lib\scratch-rt\platform-Windows\lib\refalrts-main.def
if not exist "%DEFFILE%" (
  set DEFFILE=%~dp0..\src\lib\platform-Windows\lib\refalrts-main.def
)

call %CONFIG_FILE%

if not "%CPPLINEE%" == "" exit /b 0

if exist "%~dp0..\..\c-plus-plus.conf.bat" (
  call "%~dp0..\..\c-plus-plus.conf.bat"
)

if not "%CPPLINEE%" == "" exit /b 0
echo C++ compiler is not selected, please edit file %CONFIG_FILE:\scripts\..=%
exit /b 1
