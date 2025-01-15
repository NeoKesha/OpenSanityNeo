echo off
cls
echo %time%
mkdir bin
mkdir bin\Release
..\runtime\bin\CL.Exe src\data\libtwindata.c /I..\runtime\include\ /Fo"bin\\Release\\libtwindata.obj" /c
..\runtime\bin\CL.Exe src\code\libtwin.cpp /I..\runtime\include\ /Fo"bin\\Release\\libtwin.obj" /c  /EHsc
..\runtime\bin\ML.Exe /coff /c /Fo"bin\\Release\\main.obj" /Zf /nologo src\mainRelease.asm
..\runtime\bin\Link.Exe /SUBSYSTEM:XBOX /NODEFAULTLIB /LIBPATH:..\runtime\lib /MAPINFO:EXPORTS "xapilib.lib" "xboxkrnl.lib"  "libc.lib" "libcp.lib" "xgraphics.lib" "d3d8.lib" "d3dx8.lib" "dsound.lib" "xmv.lib" /OUT:bin\\Release\\default.exe bin\\Release\\main.obj bin\\Release\\libtwindata.obj bin\\Release\\libtwin.obj 
..\runtime\bin\imagebld.exe /IN:bin\\Release\\default.exe /OUT:bin\\Release\\default.xbe
copy bin\Release\\default.xbe ..\..\Content\default.xbe
echo %time%

echo on