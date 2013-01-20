@echo off
echo.
echo Voy a compilar %1
echo.

rem =======================================================
rem Dejamos en fNameNoExt el nombre solo, sin la extension
rem =======================================================

set fName=%1

for /f "tokens=* delims= " %%F in ('echo %fName%') do (
set fNameNoExt=%%~nF
)

rem ======================================================
rem Compilamos con zcc +zx -lndos -lm -create-app -Cz-o -CzPrograma.tap Programa.c 
zcc +zx -lndos -lm -lmalloc -create-app -Cz-o -Cz%fNameNoExt%.tap %1

