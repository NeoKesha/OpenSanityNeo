#include <XTL.h>
#include <stl.h>
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

TwinString* TwinString::Append(char* other){
	size_t otherLength = strlen(other);
	if (otherLength < 1) { 
		return this;
	}
	
	this->length = this->length + otherLength;
	size_t newCapacity = (this->length + 0x20U) & 0xffffffe0;
	
	char* oldBuffer = this->buffer;
	bool cleanupFlag = false;
	if (this->capacity < newCapacity) {
		this->capacity = newCapacity;
		this->buffer = (char*)AllocateMemory(newCapacity);
		cleanupFlag = true;
	}
	if (oldBuffer == 0) {
		strcpy(this->buffer, other);
	}
	else {
		if (cleanupFlag) {
			strcpy(this->buffer, oldBuffer);
		}
		size_t myLength = strlen(this->buffer);
		char* dst = this->buffer + myLength;
		char* src = other;
		for (int i = otherLength / 4; i > 0; --i) {
			*((int*)dst) = *((int*)src);
			dst += 4;
			src += 4;
		}
		for (int i = otherLength % 4; i > 0; --i) {
			*(dst) = *(src);
			dst += 1;
			src += 1;
		}
	}
	if (cleanupFlag) {
		FreeMemory(oldBuffer);
		this->capacity = 0;
	}
	this->buffer[this->length] = '\0';

	return this;
}
TwinString* TwinString::AppendInt(unsigned int num){
	this->buffer = (char *)AllocateMemory(32);
	this->length = 0;
	this->capacity = 32;
	
	if (num == 0) {
		this->buffer[this->length] = '0';
	} 
	else {
		unsigned int number = num / 10;
		if (number != 0) {
			this->ParseIntInternal(number, 0);
		}
		this->buffer[this->length] = num - 10 * number + '0';
	}
	
	this->length = this->length + 1;
	this->buffer[this->length] = '\0';
	
	return this;
}

TwinString* TwinString::Concatenate(TwinString* dst, char* str){
	TwinString tmpStr;
	tmpStr.Copy(this->buffer);
	tmpStr.Append(str);
	

	dst->buffer = 0;
	dst->length = 0;
	dst->capacity = 0;
	dst->Copy(tmpStr.buffer);

	return dst;
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
	
void TwinString::Prepend(char* str){
	//ISSUE: non original implementation because i am tired
	TwinString tmp;
	tmp.Copy(str);
	tmp.Append(this->buffer);
	this->Copy(tmp.buffer);
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
void TwinString::ParseIntInternal(unsigned int value, int length){
	unsigned int num = value / 10;
	if ((num != 0) || (length > 1)) {
		this->ParseIntInternal(num, length - 1);
	}
	
	this->buffer[this->length] = value - 10 * num + '0';
	this->length = this->length + 1;
}
void TwinString::ReadFromFile(MemoryStream* memoryStream){
	FreeMemory(this->buffer);
	this->buffer = 0;
	this->length = 0;
	this->capacity = 0;
	
	memoryStream->ReadInt2((char*)&(this->length));
	if (this->length > 0) {
		this->capacity = (this->length + 0x20U) & 0xffffffe0;
		this->buffer = (char*)AllocateMemory(this->capacity);
		memoryStream->Read(this->buffer, this->length, 1);
		this->buffer[this->length] = '\0';
	}
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
	return _strnicmp(str, other, strlen(other)) == 0;
}
bool TwinString::StrDiffParseFloat(char* str, char* key, float* outFloat){
	AssertNonImplemented
	return 0;
}
bool TwinString::StrDiffParseStr(char* str, char* key, TwinString* outString){
	char cVar1;
	char *str2endPointer;
	int str2Length;
	int equal;

	size_t keyLength = strlen(key);
	int cmp = _strnicmp(str,key,keyLength);
	if ((cmp == 0) && (str[keyLength] == '=')) {
		outString->Copy(str + keyLength + 1);
		outString->ToUpper();
		return true;
	}
	return false;
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
	for (int i = 0; i < this->length; ++i) {
		this->buffer[i] = toupper(this->buffer[i]);
	}
	return;
}
void TwinString::ToLower(){
	for (int i = 0; i < this->length; ++i) {
		this->buffer[i] = tolower(this->buffer[i]);
	}
	return;
}
void TwinString::Write(MemoryStream* stream){
	stream->WriteInt2(this->length);
	if (this->length != 0) {
		stream->Write(this->buffer, this->length);
	}
	return;
}