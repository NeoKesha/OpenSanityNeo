#include <XTL.h>
#include <stl.h>
#include "file_stream.h"

FileStream::FileStream() {
	this->handle = INVALID_HANDLE_VALUE;
}

FileStream::~FileStream() {
	this->CloseFile();
}

size_t FileStream::Read(char* buffer, size_t size, int reserved) {
	int bytesRead;
	bytesRead = 0;
	ReadFile(this->handle, buffer, size, (LPDWORD)&bytesRead, 0);
	this->errno = GetLastError();
	return bytesRead;
}

void FileStream::EmptyFunction1(int reserved1, int reserved2) {
	return;
}

size_t FileStream::Write(char* buffer, size_t size) {
	int bytesWriten;
	bytesWriten = 0;
	WriteFile(this->handle, buffer, size, (LPDWORD)&bytesWriten, 0);
	this->errno = GetLastError();
	return bytesWriten;
}

void FileStream::EmptyFunction2() {
	return;
}

int FileStream::IsInvalid() {
    return ((this->handle != INVALID_HANDLE_VALUE) && (this->errno == 0));
}

size_t FileStream::GetLength() {
	return GetFileSize(this->handle, 0);
}
	

size_t FileStream::GetPosition() {
	return SetFilePointer(this->handle, 0, 0, FILE_CURRENT);
}

bool FileStream::EndOfStream() {
	return this->GetPosition() >= this->GetLength();
}

void FileStream::Rewind() {
	SetFilePointer(this->handle, 0, 0, FILE_BEGIN);
	this->errno = GetLastError();
}

void FileStream::SeekEnd() {
	SetFilePointer(this->handle, 0, 0, FILE_END);
	this->errno = GetLastError();
}

void FileStream::SeekForward(size_t length) {
	SetFilePointer(this->handle, length, 0, FILE_CURRENT);
	this->errno = GetLastError();
}

void FileStream::SeekFromStart(size_t length) {
	SetFilePointer(this->handle, length, 0, FILE_BEGIN);
	this->errno = GetLastError();
}

void FileStream::ReadLong(char* buffer) {
	this->Read(buffer, 8, 1);
}

void FileStream::ReadFloat(char* buffer) {
	this->Read(buffer, 4, 1);
}

void FileStream::ReadByte(char* buffer) {
	this->Read(buffer, 1, 1);
}

void FileStream::ReadInt2(char* buffer) {
	this->Read(buffer, 4, 1);
}

void FileStream::ReadInt3(char* buffer) {
	this->Read(buffer, 4, 1);
}

void FileStream::ReadShort(char* buffer) {
	this->Read(buffer, 2, 1);
}

void FileStream::ReadByte2(char* buffer) {
	this->Read(buffer, 1, 1);
}

void FileStream::ReadUInt(char* buffer) {
	this->Read(buffer, 4, 1);
}

void FileStream::ReadInt5(char* buffer) {
	this->Read(buffer, 4, 1);
}

void FileStream::ReadShort2(char* buffer) {
	this->Read(buffer, 2, 1);
}

void FileStream::ReadByte3(char* buffer) {
	this->Read(buffer, 1, 1);
}

void FileStream::WriteLong(long long value) {
	this->Write((char*)&value, 8);
}

void FileStream::WriteFloat(float value) {
	this->Write((char*)&value, 4);
}

void FileStream::WriteByte(unsigned char value) {
	this->Write((char*)&value, 1);
}

void FileStream::WriteInt2(int value) {
	this->Write((char*)&value, 4);
}

void FileStream::WriteInt3(int value) {
	this->Write((char*)&value, 4);
}

void FileStream::WriteShort(short value) {
	this->Write((char*)&value, 2);
}

void FileStream::WriteByte2(unsigned char value) {
	this->Write((char*)&value, 1);
}

void FileStream::WriteUInt(unsigned int value) {
	this->Write((char*)&value, 4);
}

void FileStream::WriteInt5(int value) {
	this->Write((char*)&value, 4);
}

void FileStream::WriteShort2(short value) {
	this->Write((char*)&value, 2);
}

void FileStream::WriteByte3(unsigned char value) {
	this->Write((char*)&value, 1);
}

void FileStream::OpenFile(char* fname, int fmode, int reserved) {
	char totalFname[1028];
	int access = 0;
	int mode = 0;
	
	switch (fmode) {
		case 0:
			mode = CREATE_ALWAYS;
			break;
		case 1:
			mode = OPEN_EXISTING;
			access = GENERIC_READ;
			break;
		case 2:
			mode = TRUNCATE_EXISTING;
			access = GENERIC_WRITE;
			break;
		case 3:
			mode = OPEN_EXISTING;
			access = GENERIC_WRITE | GENERIC_READ;
			break;
	}
	
	ZeroMemory(totalFname, sizeof(totalFname));
	lstrcpyA(totalFname, "D:\\");
	lstrcatA(totalFname, fname);
	this->handle = CreateFileA(totalFname, access, 0, 0, mode, 0, 0);
	this->errno = GetLastError();
}

void FileStream::CloseFile() {
	if (this->handle != INVALID_HANDLE_VALUE) {
		CloseHandle(this->handle);
	}
	this->handle = INVALID_HANDLE_VALUE;
}

unsigned int FileStream::ReadCheck(char* buffer, size_t size, unsigned char flag) {
	size_t bytesRead;
	bytesRead = 0;
	ReadFile(this->handle,buffer,size,(LPDWORD)&bytesRead,0);
	
	this->errno =  GetLastError();
	if (((bytesRead < size) && (flag != 0)) && (bytesRead == 0)) {
		bytesRead = 0xffffffff;
	}
	return bytesRead;
}