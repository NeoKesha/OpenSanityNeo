#include <XTL.h>
#include <stl.h>
#include "twin_base.h"
#include "memory_stream.h"

MemoryStream::MemoryStream() {
	//Not implemented
}

MemoryStream::~MemoryStream() {
	//Not implemented
}

size_t MemoryStream::Read(char* buffer, size_t size, int reserved) {
	byte* src = this->currentPtr;
	byte* dst = (byte*)buffer;

	for (unsigned int i = size / 4; i != 0; --i) {
		*(int*)dst = *(int*)src;
		src = src + 4;
		dst = dst + 4;
	}
	for (unsigned int i = size % 4; i != 0; --i) {
		*dst = *src;
		src = src + 1;
		dst = dst + 1;
	}
	this->currentPtr = this->currentPtr + size;
	return size;
}

void MemoryStream::SeekBackwards(int reserved, size_t amount) {
	this->currentPtr = this->currentPtr - length;
	return;
}

size_t MemoryStream::Write(char* buffer, size_t size) {
	//Not implemented
	return 0;
}

void MemoryStream::EmptyFunction() {
	return;
}

int MemoryStream::IsInvalid() {
    return false;
}

size_t MemoryStream::GetLength() {
	return this->length;
}
	

size_t MemoryStream::GetPosition() {
	return (size_t)(this->currentPtr - this->dataStart);
}

bool MemoryStream::EndOfStream() {
	return this->GetPosition() >= this->length;
}

void MemoryStream::Rewind() {
	this->currentPtr = this->dataStart;
}

void MemoryStream::SeekEnd() {
	this->currentPtr = this->dataStart + this->length;
}

void MemoryStream::SeekForward(size_t length) {
	this->currentPtr = this->currentPtr + length;
}

void MemoryStream::SeekFromStart(size_t length) {
	this->currentPtr = this->dataStart + length;
}

void MemoryStream::ReadLong(char* buffer) {
	this->Read(buffer, 8, 1);
}

void MemoryStream::ReadFloat(char* buffer) {
	this->Read(buffer, 4, 1);
}

void MemoryStream::ReadByte(char* buffer) {
	this->Read(buffer, 1, 1);
}

void MemoryStream::ReadInt2(char* buffer) {
	this->Read(buffer, 4, 1);
}

void MemoryStream::ReadInt3(char* buffer) {
	this->Read(buffer, 4, 1);
}

void MemoryStream::ReadShort(char* buffer) {
	this->Read(buffer, 2, 1);
}

void MemoryStream::ReadByte2(char* buffer) {
	this->Read(buffer, 1, 1);
}

void MemoryStream::ReadUInt(char* buffer) {
	this->Read(buffer, 4, 1);
}

void MemoryStream::ReadInt5(char* buffer) {
	this->Read(buffer, 4, 1);
}

void MemoryStream::ReadShort2(char* buffer) {
	this->Read(buffer, 2, 1);
}

void MemoryStream::ReadByte3(char* buffer) {
	this->Read(buffer, 1, 1);
}

void MemoryStream::WriteLong(long long value) {
	this->Write((char*)&value, 8);
}

void MemoryStream::WriteFloat(float value) {
	this->Write((char*)&value, 4);
}

void MemoryStream::WriteByte(unsigned char value) {
	this->Write((char*)&value, 1);
}

void MemoryStream::WriteInt2(int value) {
	this->Write((char*)&value, 4);
}

void MemoryStream::WriteInt3(int value) {
	this->Write((char*)&value, 4);
}

void MemoryStream::WriteShort(short value) {
	this->Write((char*)&value, 2);
}

void MemoryStream::WriteByte2(unsigned char value) {
	this->Write((char*)&value, 1);
}

void MemoryStream::WriteUInt(unsigned int value) {
	this->Write((char*)&value, 4);
}

void MemoryStream::WriteInt5(int value) {
	this->Write((char*)&value, 4);
}

void MemoryStream::WriteShort2(short value) {
	this->Write((char*)&value, 2);
}

void MemoryStream::WriteByte3(unsigned char value) {
	this->Write((char*)&value, 1);
}