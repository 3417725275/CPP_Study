#pragma once
#include <string>
#include "MyVector.h"
#include "FileData.h"
using std::string;

class FileReader
{

public:
	//����ֵ ������(��������) [��ѡ�����η�]
	MyVector<FileData> read_file(const string& file_path);


};