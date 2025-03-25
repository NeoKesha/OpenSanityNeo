#pragma once
#include <twin_base.h>
class FileStream : TwinBase {
	HANDLE handle;
	int errno;

public:
	FileStream();
	virtual ~FileStream();

	virtual size_t Read(char* buffer, size_t size, int reserved);
	virtual void EmptyFunction1(int reserved1, int reserved2);
	virtual size_t Write(char* buffer, size_t size);
	virtual void EmptyFunction2();
	virtual int IsInvalid();
	virtual size_t GetLength();
	virtual size_t GetPosition();
	virtual bool EndOfStream();
	virtual void Rewind();
	virtual void SeekEnd();
	virtual void SeekForward(size_t length);
	virtual void SeekFromStart(size_t length);
	virtual void ReadLong(char* buffer);
	virtual void ReadFloat(char* buffer);
	virtual void ReadByte(char* buffer);
	virtual void ReadInt2(char* buffer);
	virtual void ReadInt3(char* buffer);
	virtual void ReadShort(char* buffer);
	virtual void ReadByte2(char* buffer);
	virtual void ReadUInt(char* buffer);
	virtual void ReadInt5(char* buffer);
	virtual void ReadShort2(char* buffer);
	virtual void ReadByte3(char* buffer);
	virtual void WriteLong(long long value);
	virtual void WriteFloat(float value);
	virtual void WriteByte(unsigned char value);
	virtual void WriteInt2(int value);
	virtual void WriteInt3(int value);
	virtual void WriteShort(short valye);
	virtual void WriteByte2(unsigned char value);
	virtual void WriteUInt(unsigned int value);
	virtual void WriteInt5(int value);
	virtual void WriteShort2(short value);
	virtual void WriteByte3(unsigned char value);
	virtual void OpenFile(char* fname, int fmode, int reserved);
	virtual void CloseFile();
	virtual unsigned int ReadCheck(char* buffer, size_t size, unsigned char flag);
};