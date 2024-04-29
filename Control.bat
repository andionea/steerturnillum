@echo off
title Control

:begin

echo.
echo ////////////////////////////////////////////////////////////
echo --------------- Project Control Interface -----------------
echo ////////////////////////////////////////////////////////////
echo.

echo Project's user interface:
echo 1. build
echo 2. clean
echo 3. flash
echo 4. exit
echo.

set /p op=Type option:
if "%op%"=="1" goto op1
if "%op%"=="2" goto op2
if "%op%"=="3" goto op3
if "%op%"=="4" goto op4

echo Please Pick an option:
goto begin

:op1
echo you picked option 1
echo starting build ...

cd 4_Engineering\1_Software\2_Development\2_Build\Debug
make -j4 all

goto begin

:op2
echo you picked option 2
echo starting clean ...

cd 4_Engineering\1_Software\2_Development\2_Build\Debug
make -j4 clean

goto begin

:op3
echo you picked option 3
echo starting flash ...



goto begin

:op4
echo you picked option 4
echo exit user interface
cd ../../../../..

::exit

::@exit