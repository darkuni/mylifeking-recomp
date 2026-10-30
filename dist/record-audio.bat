@echo off
rem Runs the game and also saves exactly what it sends to the sound card into mlk_audio.wav
cd /d "%~dp0"
set AUDIO_WAV=mlk_audio.wav
mylifeking.exe
