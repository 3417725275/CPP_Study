#pragma once
#include <string>
#include "MyVector.h"
#include "FileData.h"


class File
{
private:
	std::string _filePath;
	std::string _headerline;
	MyVector<FileData> _data;
public:
	File(const std::string& filePath) :_filePath(filePath)
	{

	}
	~File()
	{

	}


};