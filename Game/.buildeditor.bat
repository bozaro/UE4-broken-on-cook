setlocal
call %~dp0.variables.bat
if %errorlevel% neq 0 exit /b %errorlevel%

call "%UE4%\Engine\Build\BatchFiles\Build.bat" "%PROJECT_NAME%Editor" Win64 Development "%~dp0%PROJECT_NAME%.uproject" %UE4_ROCKET% %*
if %errorlevel% neq 0 exit /b %errorlevel%
