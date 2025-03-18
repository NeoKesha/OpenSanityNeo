#include <XTL.h>
#include <stl.h>

class FileStream {
	HANDLE handle;
	int errno;

public:
	FileStream();
	virtual int GetLength();

};

extern "C" int FileStream::GetLength() {
	return GetFileSize(this->handle, 0);
}