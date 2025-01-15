echo off
cls
echo %time%
mkdir bin
mkdir bin\Debug
..\runtime\bin\CL.Exe src\debug\libdbg.cpp /I..\runtime\include\ /Fo"bin\\Debug\\libdbg.obj" /c  /EHsc
..\runtime\bin\CL.Exe src\code\libtwin.cpp /I..\runtime\include\ /Fo"bin\\Debug\\libtwin.obj" /c  /EHsc /DDEBUG
..\runtime\bin\CL.Exe src\data\libtwindata.c /I..\runtime\include\ /Fo"bin\\Debug\\libtwindata.obj" /c
..\runtime\bin\ML.Exe /coff /c /Fo"bin\\Debug\\main.obj" /Zf /nologo src\mainDebug.asm
..\runtime\bin\Link.Exe /SUBSYSTEM:XBOX /NODEFAULTLIB /LIBPATH:..\runtime\lib /MAPINFO:EXPORTS "xapilib.lib" "xboxkrnl.lib"  "libc.lib" "libcp.lib" "xgraphics.lib" "d3d8.lib" "d3dx8.lib" "dsound.lib" "xmv.lib" /OUT:bin\\Debug\\default.exe bin\\Debug\\main.obj bin\\Debug\\libtwindata.obj bin\\Debug\\libtwin.obj bin\\Debug\\libdbg.obj
..\runtime\bin\imagebld.exe /IN:bin\\Debug\\default.exe /OUT:bin\\Debug\\default.xbe
copy bin\Debug\default.xbe ..\..\Content\default.xbe
echo %time%

echo on