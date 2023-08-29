#include "FileReader.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include "File.h"
#include <map>
#include "MyVector.h"

bool FileReader::ReadData(const std::string& filePath, File& file)
{
	if (!std::filesystem::exists(filePath))
	{
		return false;
	}
	std::ifstream reader(filePath);  // 打开CSV文件
	if (!reader.is_open()) {
		std::cout << "无法打开文件" << std::endl;
		return false;
	}

	MyVector<FileData> dataList;  // 用于存储CSV数据的向量

	std::string line;
	bool firstLine = true;
	std::map<int, std::string> index2head;
	while (std::getline(reader, line)) {

		std::istringstream iss(line);
		std::string value;
		if (firstLine)
		{
			int index = 0;
			while (std::getline(iss, value, ','))
			{
				index2head[index++] = value;
			}
			firstLine = false;
		}
		else
		{
			MyVector<std::string> row;
			FileData fileData;
			int index = 0;
			while (std::getline(iss, value, ',')) {
				fileData.assign_data(index2head[index++], value);
				row.push_back(value);
			}
			dataList.push_back(fileData);
		}
	}

	reader.close();  // 关闭文件
	return 0;
}


