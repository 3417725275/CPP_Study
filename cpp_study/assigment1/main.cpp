
#include <iostream>
#include "Console.h"
#include "test.h"
#include"FileReader.h"
#include "Computor.h"

//1.控制台(Console)显示菜单(string)
//2.接收用户输入指令(string)
//3.从csv文件(FileSource)中读取(FileReader)数据(FileData)
//4.根据输入的指令(string)做一些计算(Computor)
//5.输出到屏幕/csv文件(FileOutput)中

int main()
{
	//1.
	Console console;
	console.show_menu();
	//2.
	int parm = console.get_params(); //接受键盘输入的指令，方便后面去处理
	//3.
	FileReader reader;
	MyVector<FileData> fileData = reader.read_file("1234.csv");

	Computor computer;
	if (parm == 1)
	{//计算平风速和标准差
		WindData wind_data = computer.compute_wind_speed(fileData);
	}
	else if (parm == 2)
	{//计算平均温度和标准差
		Temperature temper = computer.compute_temperature(fileData);
	}
	else if (parm == 3)
	{//计算平均太阳辐射和标准差
		SolarData temper = computer.compute_solar(fileData);
	}
	else if (parm == 4)
	{	//计算上面所有项,并输出到csv文件
		AllData all_data = computer.compute_all_data(fileData);
		
		//将all_data输出到csv文件

		//1.创建（FileWriter）csv文件(csvFile)
		//2.把all_data的数据写入到csv文件
		//3.关闭文件



	}
	else if (parm == 5)
	{//退出程序
		return 0;
	}
	else
	{
		std::cout << "输错指令了" << std::endl;
		return 0;
	}


	//switch (parm)
	//{
	//case 1:
	//	//计算平风速和标准差
	//	break; //如果不加Break，会顺序执行case语句
	//	//......
	//case 2:
	//	//计算平均温度和标准差
	//	break;
	//case 5:

	//	return 0;
	//default:
	//	//处理默认情况，相当于上面的else分支
	//	break;
	//}

	return 0;
}

