#pragma once
#include <string>
#include "MyVector.h"
#include "FileData.h"
using std::string;

class FileReader
{

public:
	//返回值 函数名(函数参数) [可选的修饰符]
	MyVector<FileData> read_file(const string& file_path);


};