echo off
cls
echo %time%
mkdir bin
..\runtime\bin\CL.Exe libdbg.cpp /I..\runtime\include\ /Fo"bin\\libdbg.obj" /c  /EHsc
..\runtime\bin\CL.Exe libtwindata.c /I..\runtime\include\ /Fo"bin\\libtwindata.obj" /c
..\runtime\bin\ML.Exe /coff /c /Fo"bin\\main.obj" /Zf /nologo main.asm
..\runtime\bin\Link.Exe /SUBSYSTEM:XBOX /NODEFAULTLIB /LIBPATH:..\runtime\lib /MAPINFO:EXPORTS "xapilib.lib" "xboxkrnl.lib"  "libc.lib" "libcp.lib" "xgraphics.lib" "d3d8.lib" "d3dx8.lib" "dsound.lib" "xmv.lib" /OUT:bin\\default.exe bin\\main.obj bin\\libtwindata.obj bin\\libdbg.obj
..\runtime\bin\imagebld.exe /IN:bin\\default.exe /OUT:bin\\default.xbe
copy bin\default.xbe ..\..\Content\default.xbe
echo %time%

echo on