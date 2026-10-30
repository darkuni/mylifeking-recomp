@echo off
rem Makes the "game" folder from your own WADs.
rem Usage: drag nothing - just run it with both WADs in this folder, named as below, or edit the names.
cd /d "%~dp0"
set BASE=FFCC_My_Life_As_A_King.wad
set DLC=FFCC_My_Life_as_a_King_DLC_Complete.wad
where python >nul 2>nul || (echo Python 3.11+ is required: https://www.python.org/downloads/ & pause & exit /b 1)
python -m pip install --quiet libWiiPy
if exist "%DLC%" (python tools\prepare_wad.py "%BASE%" game "%DLC%") else (python tools\prepare_wad.py "%BASE%" game)
pause
