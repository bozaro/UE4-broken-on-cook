@echo off

call "%UE4%\Engine\Build\BatchFiles\Build.bat" "GameEditor" Win64 Development "%~dp0Game.uproject"
if %errorlevel% neq 0 exit /b %errorlevel%

call "%UE4%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun -project=%~dp0Game.uproject -cook -stage -archive -archivedirectory=%~dp0PackedGame -package -clientconfig=Development -targetplatform=Win64 -build -utf8output
if %errorlevel% neq 0 exit /b %errorlevel%
