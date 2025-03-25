#pragma once
#include <twin_base.h>
#include <stream/memory_stream.h>

class TwinString {
public:
	char* buffer;
	size_t length;
	size_t capacity;
	
	TwinString();
	~TwinString();
	
	TwinString* Set(char* str);
	void SetValue(char* str);
	
	TwinString* Append(char* str);
	TwinString* AppendInt(unsigned int num);
	TwinString* Concatenate(TwinString* dst, char* str);
	TwinString* Copy(char* str);
	TwinString* CopyFromCharArray(char* other);
	TwinString* FUN_000249e0(unsigned int param_1);
	TwinString* FUN_00157630(float param_1);
	TwinString* ParseInt(unsigned int number);
	
	void Prepend(char* str);
	int FindSubstringEndPos(int startIndex,char* str);
	unsigned int FUN_00135e40(char* str);
	bool FUN_001572d0(int length);
	void ParseIntInternal(unsigned int number,int length);
	void ReadFromFile(MemoryStream* memoryStream);
	unsigned int Replace(char* substring,char* replaceWith);
	bool FUN_00157de0(int* outInt);
	
	static void __cdecl ReplaceByStrBeforeC(TwinString* str1,TwinString* str2,char c);
	static bool __cdecl SetCdRomVolume(TwinString* str);
	static bool __cdecl FUN_0015a9a0(TwinString* str1,TwinString* str2);
	static TwinString* __cdecl Split(TwinString* result, TwinString* delimiter, TwinString** outStrings);
	static TwinString*  __cdecl TwinString::FUN_00158ec0(TwinString* str,int param_2,unsigned int param_3);
	static TwinString*  __cdecl TwinString::FUN_00158fb0(TwinString* str,int param_2,unsigned int param_3);
	static bool __stdcall StrDiff(char* str, char* other);
	static bool __stdcall StrDiffParseFloat(char* str, char* key, float* outFloat);
	static bool __stdcall StrDiffParseStr(char* str, char* key, TwinString* outString);
	static bool __stdcall StrParseInt(char* str ,char* key, int* outInt);
	
	bool SubstringRelated(char* substring);
	void ToUpper();
	void ToLower();
	void Write(MemoryStream* stream);
};