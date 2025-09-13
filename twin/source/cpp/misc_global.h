#pragma once
#include <twin_base.h>
extern "C" int LANG_CNT;
extern "C" char** LANG_NAMES;
extern "C" char** LANG_ARR1;
extern "C" void __cdecl IterateLanguages(unsigned int languageCount,char **languageArray);

class Color : public TwinBase {
public:
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
};