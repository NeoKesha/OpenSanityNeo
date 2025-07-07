#include <XTL.h>
#include <stl.h>
#include "misc_global.h"

extern "C" void __cdecl IterateLanguages(unsigned int languageCount,char **languageArray) {
	LANG_CNT = languageCount;
	LANG_NAMES = languageArray;
	char*** ptr = &LANG_ARR1;
	for (int cnt = 2; cnt != 0; --cnt) {
		size_t size = languageCount * 4;
		*ptr = (char**)VIRTUAL_POOL.AllocateMemoryInternal(size);
		for (int index = 0; index < languageCount; ++index) {
			(*ptr)[index] = 0;
		}
		++ptr;
	}
}
