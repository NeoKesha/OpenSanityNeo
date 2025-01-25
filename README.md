# OpenSanityNeo
 
OpenSanityNeo is Crash Twinsanity (XBOX PAL) decompilation\disassembly project, made using Ghidra and code generation script.
Goal of this project is to achieve accurate disassembly of the game able to be built back, then one by one manually replace assembly with C\C++
Code Generation script and Ghidra project are not published yet, but will be later.
# What it can do? What's the catch?

Right now this project is just x86 disassembly. However, all(most of) addresses were resolved into labels and static library references are correctly linked, allowing for heavy modification of game's code and date, as well as custom code injection such as debugging and logging code.
Right now this decompilation isn't perfect, giving crashes and glitches there and there.
# How to build

1. Clone repository
2. In the same folder where repository is create "runtime" folder and put NeoXBOX ([download](https://drive.google.com/file/d/1uI7oD7KNx8ic8WATWsD50uFFylAJhy6a)) contents there
3. Additionally, one level higher, create "Content" folder and put Crash Twinsanity game files there. After build, default.xbe will be copied there
4. Additionally, edit build.bat to your preferences
5. Additionally, add "Levels\School\Madame\ambercor" line at command.txt to boot into something "playable" and avoid crash at beach into cutscene.
# What is NeoXBOX?

NeoXBOX is a mini Xbox SDK bundle, containing Visual Studio tools (Assembler, Compiler, Linker), XBE image builder and XboxSDK libs and include.
It's lightweight and don't require Windows XP virtual machine to work.
XboxSDK contents are aquired from Internet Archive: https://archive.org/details/xbox-sdks
Download bundle: https://drive.google.com/file/d/1uI7oD7KNx8ic8WATWsD50uFFylAJhy6a
# List of "playable" chunks
Add one of those chunks names to "command.txt". Coreent, or Antagony, is most playable right now (skip all checkpoints and disable autosave)
- Levels\AltEarth\Hub\Coreent
- Levels\AltEarth\Hub\Alta
- Levels\AltEarth\Hub\Slipjoin
- Levels\AltEarth\Core\Corea
- Levels\AltEarth\Core\Coreb
- Levels\AltEarth\Core\Corec
- Levels\AltEarth\Core\Cored
- Levels\AltEarth\Lab\Altlabin
- Levels\AltEarth\Lab\Labext
- Levels\AltEarth\RockSlid\l10start
- Levels\School\Boiler\boiler_3
- Levels\School\Boiler\boiler_4
- Levels\School\Boiler\boiler_5
- Levels\School\Boiler\boiler_6
- Levels\School\Crash\crgpa02
- Levels\School\Crash\crgpa04
- Levels\School\Crash\crgpa08
- Levels\School\Madame\Ambercor
- Levels\School\Madame\Amberly
- Levels\School\Sch_Hub\schship
- Levels\School\Sch_Hub\slk01
- Levels\Ice\HighSeas\gpa01
- Levels\Ice\HighSeas\gpa02
- Levels\Ice\HighSeas\gpa04
- Levels\Ice\IceClimb\ukatrans
- Levels\Ice\SlipSlide\l05start
- Levels\Ice\Hub\airship
- Levels\Ice\Hub\Labint
- Levels\Ice\Hub\shipent
- Levels\Earth\Hub\hubd
- Levels\Earth\Hub\pier

# When will you release Ghidra project and Code Generation script?

Ghidra project and Code Generation script will be released after code generation process will be ironed out, fixing crashes and glitches it produces right now.
If you want those files for research purposes, contact me on Twinsanity Modding server: https://discord.gg/Q5nHRUm
# Will it be 100% accurate decompilation?

No. While instruction disassembly is 95%-100% accurate, librarry versions are different, as well as code and data layout. Little to be done about it and nothing worth the effort.
