call %~dp0.projectsettings.bat
if %errorlevel% neq 0 exit /b %errorlevel%

if "%UE4%" == "" (set UE4=%~dp0..\ue4)

"%UE4%\Engine\Binaries\DotNET\GitDependencies.exe" --force %GIT_DEPS_OPT%
if %errorlevel% neq 0 exit /b %errorlevel%

if "%UE4_MODE%" == "" (
	if exist "%UE4%\Engine\Build\Rocket.txt" (
		set UE4_MODE=-rocket
	) else if exist "%UE4%\Engine\Binaries\Win64\UE4Game-Redist-Core.lib" (
		rem Unreal Engine 4.7
		set UE4_MODE=-rocket
	) else (
		set UE4_MODE=-engine
	)
)

if "%UE4_MODE%" == "-rocket" (
	set UE4_ROCKET=-rocket
) else (
	set UE4_ROCKET=
)

if "%UE4EDITOR%" == "" (
	if exist "%UE4%\Engine\Binaries\Win64\UE4Editor.exe" (
		set UE4EDITOR=%UE4%\Engine\Binaries\Win64\UE4Editor.exe
	) else (
		set UE4EDITOR=%UE4%\Engine\Binaries\Win64\UE4Editor-Win64-Debug.exe
	)
)

if "%UE4EDITORCMD%" == "" (
	if exist "%UE4%\Engine\Binaries\Win64\UE4Editor-Cmd.exe" (
		set UE4EDITORCMD=%UE4%\Engine\Binaries\Win64\UE4Editor-Cmd.exe
	) else (
		set UE4EDITORCMD=%UE4%\Engine\Binaries\Win64\UE4Editor-Win64-Debug-Cmd.exe
	)
)
