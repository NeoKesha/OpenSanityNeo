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

TwinString::~TwinString() {
	FreeMemory(this->buffer);
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
TwinString* TwinString::Copy(char* other){
	if (other != this->buffer) {
		if (other == 0) {
			this->length = 0;
		}
		else {
			this->length = strlen(other);
		}
		
		size_t newCapacity = (this->length + 0x20U) & 0xffffffe0;
		if (this->capacity < newCapacity) {
			if (this->buffer != 0) {
				FreeMemory(this->buffer);
			}
			this->capacity = newCapacity;
			this->buffer = (char *)AllocateMemory(this->capacity);
		}
		
		if (other == 0) {
			*this->buffer = '\0';
		}
		else {
			strcpy(this->buffer, other);
		}
	}
	return this;
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

extern "C" TwinString CdRomVolume;
bool __cdecl TwinString::SetCdRomVolume(TwinString* str){
	CdRomVolume.Copy(str->buffer);
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
bool TwinString::StrDiff(char* str, char* other){
	AssertNonImplemented
	return 0;
}
bool TwinString::StrDiffParseFloat(char* str, char* key, float* outFloat){
	AssertNonImplemented
	return 0;
}
bool TwinString::StrDiffParseStr(char* str, char* key, TwinString* outString){
	AssertNonImplemented
	return 0;
}

bool TwinString::FUN_00157de0(int* outInt) {
	char* ptr = this->buffer;
	if ((ptr[0] == '+') || (ptr[0] == '-')) {
		ptr = ptr + 1;
	}
	
	int result = 0;
	if ((*ptr > '/') && (*ptr < ':')) {
		do {
			result = *ptr - 0x30 + result * 10;
			ptr = ptr + 1;
			if (*ptr < '0') break;
		} while (*ptr < ':');
		
		if (*ptr != '.') {
			if (*ptr == '-') {
				result = -result;
			}
			*outInt = result;
			return *ptr == '\0';
		}
	}
	return false;
}

bool TwinString::StrParseInt(char* str ,char* key, int* outInt){
	TwinString tmpString;

	size_t keyLength = strlen(key);
	int cmp = _strnicmp(str, key, keyLength);
	if ((cmp == 0) && (str[keyLength] == '=')) {
		tmpString.Set(str + keyLength + 1);
		tmpString.FUN_00157de0(outInt);
		return true;
	}
	return false;
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