@echo off
setlocal
call %~dp0.variables.bat
if %errorlevel% neq 0 exit /b %errorlevel%

cmd /v /c "%UE4%\Engine\Build\BatchFiles\CopyVisualizers.bat"
if %errorlevel% neq 0 exit /b %errorlevel%

"%UE4%\Engine\Binaries\DotNET\UnrealBuildTool.exe" -projectfiles -game %UE4_MODE% "%~dp0%PROJECT_NAME%.uproject" -2013
if %errorlevel% neq 0 exit /b %errorlevel%
