#include "FileReader.h"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
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

	std::vector<std::vector<std::string>> data;  // 用于存储CSV数据的向量

	std::string line;
	while (std::getline(reader, line)) {
		std::vector<std::string> row;
		std::istringstream iss(line);
		std::string value;

		while (std::getline(iss, value, ',')) {
			row.push_back(value);  // 将逗号分隔的值添加到行向量中
		}

		data.push_back(row);  // 将一行数据添加到数据向量中
	}

	// 打印读取的数据
	for (const auto& row : data) {
		for (const auto& value : row) {
			std::cout << value << "\t";
		}
		std::cout << std::endl;
	}

	reader.close();  // 关闭文件
	return 0;
}


