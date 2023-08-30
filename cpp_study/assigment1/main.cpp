
#include <iostream>
#include "Console.h"
#include "test.h"
#include"FileReader.h"
#include "Computor.h"

//1.����̨(Console)��ʾ�˵�(string)
//2.�����û�����ָ��(string)
//3.��csv�ļ�(FileSource)�ж�ȡ(FileReader)����(FileData)
//4.���������ָ��(string)��һЩ����(Computor)
//5.�������Ļ/csv�ļ�(FileOutput)��

int main()
{
	//1.
	Console console;
	console.show_menu();
	//2.
	int parm = console.get_params(); //���ܼ��������ָ��������ȥ����
	//3.
	FileReader reader;
	MyVector<FileData> fileData = reader.read_file("1234.csv");

	Computor computer;
	if (parm == 1)
	{//����ƽ���ٺͱ�׼��
		WindData wind_data = computer.compute_wind_speed(fileData);
	}
	else if (parm == 2)
	{//����ƽ���¶Ⱥͱ�׼��
		Temperature temper = computer.compute_temperature(fileData);
	}
	else if (parm == 3)
	{//����ƽ��̫������ͱ�׼��
		SolarData temper = computer.compute_solar(fileData);
	}
	else if (parm == 4)
	{	//��������������,�������csv�ļ�
		AllData all_data = computer.compute_all_data(fileData);
		
		//��all_data�����csv�ļ�

		//1.������FileWriter��csv�ļ�(csvFile)
		//2.��all_data������д�뵽csv�ļ�
		//3.�ر��ļ�



	}
	else if (parm == 5)
	{//�˳�����
		return 0;
	}
	else
	{
		std::cout << "���ָ����" << std::endl;
		return 0;
	}


	//switch (parm)
	//{
	//case 1:
	//	//����ƽ���ٺͱ�׼��
	//	break; //�������Break����˳��ִ��case���
	//	//......
	//case 2:
	//	//����ƽ���¶Ⱥͱ�׼��
	//	break;
	//case 5:

	//	return 0;
	//default:
	//	//����Ĭ��������൱�������else��֧
	//	break;
	//}

	return 0;
}
