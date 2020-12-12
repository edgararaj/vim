@echo off
cls

:: run vsvars if not already
if not defined DevEnvDir call vcvars64.bat > NUL

cd %~dp0
nmake -f Make_mvc.mak CPU=AMD64 GUI=yes DEBUG=no FEATURES=normal SOUND=no WINVER=0x0600 %1
