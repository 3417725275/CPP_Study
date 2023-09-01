
#include <iostream>
#include "Console.h"
#include "test.h"
#include"FileReader.h"
#include "Computor.h"
#include "MyVector2.h"
#include <vector>



//1.����̨(Console)��ʾ�˵�(string)
//2.�����û�����ָ��(string)
//3.��csv�ļ�(FileSource)�ж�ȡ(FileReader)����(FileData)
//4.���������ָ��(string)��һЩ����(Computor)
//5.�������Ļ/csv�ļ�(FileOutput)��

int main()
{
	
	//std::vector<int> vec1(10);
	//vec1.begin();//���õ���vector���еĺ�����
	//vec1.end(); //���ص������һ��Ԫ�غ���һ��λ�� //β�������
	//vec1.assign(10, 1); //���ʮ��1��������
	//vec1.back();//�������һ��Ԫ��
	//vec1.clear();//clearֻ���Ԫ�أ����ͷ��ڴ�
	//vec1.at(1);//at�����൱��operator[]������������������飬�������������Ԫ������ʱ���ᱨ��
	//vec1.empty();//����һ��Boolֵ����ʾ�����Ƿ�Ϊ��
	//vec1.front();//���ص�һ��Ԫ��
	//vec1.insert();//insert֧��ͬʱ������Ԫ�أ������ڣ�����һ��Vector�е����ݲ��뵽��ǰvector���ݵ�ĩβ
	//vec1.swap();//��������Vector�е�����
	//vec1.erase();//ɾ��ָ��λ�õ�Ԫ�أ���Ҫ����һ��������(ָ��)�����������ָ����Ҫɾ����Ԫ�ص�λ��
	//vec1.data();//�����ڲ���װ������ָ�룬
	//vec1.shrink_to_fit();//��capacity==size

	
	//1.
	Console console;
	console.show_menu();
	//2.
	int parm = console.get_params(); //���ܼ��������ָ��������ȥ����
	//3.
	FileReader reader;
	MyVector2<FileData> fileData = reader.read_file("1234.csv");

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

