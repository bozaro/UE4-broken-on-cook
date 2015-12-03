@echo off
setlocal
call %~dp0.variables.bat
if %errorlevel% neq 0 exit /b %errorlevel%

rem WO-4097
call %~dp0.buildeditor.bat
if %errorlevel% neq 0 exit /b %errorlevel%

if "%BUILDCONFIG%" == "" (
	set BUILDCONFIG=Development
)

if "%SERVER_BUILDCONFIG%" == "" (
	set SERVER_BUILDCONFIG=Development
)

if "%TARGET_PLATFORMS%" == "" (
	set TARGET_PLATFORMS=Win64
)

if "%SERVER_TARGET_PLATFORMS%" == "" (
	set SERVER_TARGET_PLATFORMS=Win64
)

if "%NUM_COOKERS%" == "" (
	set NUM_COOKERS=0
)

if "%MAPS%" == "" (
	set MAPS=-allmaps
) else (
	set MAPS=-map=%MAPS%
)

if "%NOWINDOWSSERVER%" == "true" (
	set SERVER_OPTIONS=
) else (
	set SERVER_OPTIONS=-server -serverconfig=%SERVER_BUILDCONFIG% -serverplatform=%SERVER_TARGET_PLATFORMS%
)

if "%NOCOOKALL%" == "true" (
	set COOKALL=""
) else (
	set COOKALL="-CookAll"
)
set MAPS=-map=mini_arena
set COOKALL=""
set SERVER_OPTIONS=

call "%UE4%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun "-project=%~dp0%PROJECT_NAME%.uproject" %UE4_ROCKET% -cook -NumCookersToSpawn=%NUM_COOKERS% %MAPS% -CrashReporter -stage -archive "-archivedirectory=%~dp0..\PackedGame" -package -clientconfig=%BUILDCONFIG% -targetplatform=%TARGET_PLATFORMS% -build -utf8output %SERVER_OPTIONS% -nobootstrapexe %COOKALL% %*
if %errorlevel% neq 0 exit /b %errorlevel%
