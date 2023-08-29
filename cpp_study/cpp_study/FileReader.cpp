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
	std::ifstream reader(filePath);  // ��CSV�ļ�
	if (!reader.is_open()) {
		std::cout << "�޷����ļ�" << std::endl;
		return false;
	}

	MyVector<FileData> dataList;  // ���ڴ洢CSV���ݵ�����

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

	reader.close();  // �ر��ļ�
	return 0;
}


