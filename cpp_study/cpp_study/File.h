#pragma once
#include <string>
#include "MyVector.h"
#include "FileData.h"


class File
{
private:
	std::string _filePath;
	MyVector<FileData> _data;
public:
	File(const std::string& filePath) :_filePath(filePath)
	{

	}
	~File()
	{

	}
public:

};