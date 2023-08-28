#pragma once
#include <string>

class File;
class FileReader
{

public:
	bool ReadData(const std::string& filePath, File& file);
};