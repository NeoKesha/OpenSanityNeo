#include <XTL.h>
#include <stl.h>
#include "twin_base.h"
#include "twin_string.h"

TwinString* TwinString::Set(char* str) {
	this->buffer = 0;
	this->capacity = 0;
	this->SetValue(str);
	return this;
}

TwinString::TwinString() {
	this->buffer = 0;
	this->capacity = 0;
	this->length = 0;
}

void TwinString::SetValue(char* str) {
	if ((str != 0) && (*str != '\0')) {
		this->length = strlen(str);
		
		size_t capacity = ((this->length) + 0x20U) & 0xffffffe0;
		if (this->capacity < capacity) {
			this->capacity = capacity;
			this->buffer = (char *)AllocateMemory(capacity); //ISSUE: Memory Leak?!
		}

		strcpy(this->buffer, str);
		return;
	}
	
	FreeMemory(this->buffer);
	this->capacity = 0;
	this->buffer = 0;
	this->length = 0;
}

TwinString* TwinString::Append(char* str){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::AppendInt(unsigned int num){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::Concatenate(TwinString* dst, char* str){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::Copy(char* str){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::CopyFromCharArray(char* other){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::FUN_000249e0(unsigned int param_1){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::FUN_00157630(float param_1){
	AssertNonImplemented
	return 0;
}
TwinString* TwinString::ParseInt(unsigned int number){
	AssertNonImplemented
	return 0;
}
	
void TwinString::AppendVariant(char* str){
	AssertNonImplemented
	return;
}
int TwinString::FindSubstringEndPos(int startIndex,char* str){
	AssertNonImplemented
	return 0;
}
unsigned int TwinString::FUN_00135e40(char* str){
	AssertNonImplemented
	return 0;
}
bool TwinString::FUN_001572d0(int length){
	AssertNonImplemented
	return 0;
}
void TwinString::ParseIntInternal(unsigned int number,int length){
	AssertNonImplemented
	return;
}
void TwinString::ReadFromFile(MemoryStream* memoryStream){
	AssertNonImplemented
	return;
}
unsigned int TwinString::Replace(char* substring,char* replaceWith){
	AssertNonImplemented
	return 0;
}
	
void __cdecl TwinString::ReplaceByStrBeforeC(TwinString* str1,TwinString* str2,char c){
	AssertNonImplemented
	return;
}
bool __cdecl TwinString::SetCdRomVolume(TwinString* str){
	AssertNonImplemented
	return 0;
}
bool __cdecl TwinString::FUN_0015a9a0(TwinString* str1,TwinString* str2){
	AssertNonImplemented
	return 0;
}
TwinString* __cdecl TwinString::Split(TwinString* result, TwinString* delimiter, TwinString** outStrings){
	AssertNonImplemented
	return 0;
}
TwinString*  __cdecl TwinString::FUN_00158ec0(TwinString* str,int param_2,unsigned int param_3){
	AssertNonImplemented
	return 0;
}
TwinString*  __cdecl TwinString::FUN_00158fb0(TwinString* str,int param_2,unsigned int param_3){
	AssertNonImplemented
	return 0;
}
unsigned int TwinString::StrDiff(TwinString* str, char* other){
	AssertNonImplemented
	return 0;
}
unsigned int TwinString::StrDiffParseFloat(TwinString* str, char* key, float* outFloat){
	AssertNonImplemented
	return 0;
}
unsigned int TwinString::StrDiffParseStr(TwinString* str, char* key, TwinString* outString){
	AssertNonImplemented
	return 0;
}
unsigned int TwinString::StrParseInt(TwinString* str ,char* key, int* outInt){
	AssertNonImplemented
	return 0;
}
	
bool TwinString::SubstringRelated(char* substring){
	AssertNonImplemented
	return 0;
}
void TwinString::ToUpper(){
	AssertNonImplemented
	return;
}
void TwinString::ToLower(){
	AssertNonImplemented
	return;
}
void TwinString::Write(MemoryStream* stream){
	AssertNonImplemented
	return;
}