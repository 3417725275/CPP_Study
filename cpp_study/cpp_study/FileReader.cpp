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
	std::ifstream reader(filePath);  // ��CSV�ļ�
	if (!reader.is_open()) {
		std::cout << "�޷����ļ�" << std::endl;
		return false;
	}

	std::vector<std::vector<std::string>> data;  // ���ڴ洢CSV���ݵ�����

	std::string line;
	while (std::getline(reader, line)) {
		std::vector<std::string> row;
		std::istringstream iss(line);
		std::string value;

		while (std::getline(iss, value, ',')) {
			row.push_back(value);  // �����ŷָ���ֵ��ӵ���������
		}

		data.push_back(row);  // ��һ��������ӵ�����������
	}

	// ��ӡ��ȡ������
	for (const auto& row : data) {
		for (const auto& value : row) {
			std::cout << value << "\t";
		}
		std::cout << std::endl;
	}

	reader.close();  // �ر��ļ�
	return 0;
}


