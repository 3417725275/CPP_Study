
#include <iostream>
#include "Console.h"
#include "test.h"
#include"FileReader.h"
#include "Computor.h"
#include "MyVector2.h"
#include <vector>



//1.控制台(Console)显示菜单(string)
//2.接收用户输入指令(string)
//3.从csv文件(FileSource)中读取(FileReader)数据(FileData)
//4.根据输入的指令(string)做一些计算(Computor)
//5.输出到屏幕/csv文件(FileOutput)中

int main()
{
	
	//std::vector<int> vec1(10);
	//vec1.begin();//调用的是vector类中的函数，
	//vec1.end(); //返回的是最后一个元素后面一个位置 //尾后迭代器
	//vec1.assign(10, 1); //存放十个1到容器中
	//vec1.back();//返回最后一个元素
	//vec1.clear();//clear只清空元素，不释放内存
	//vec1.at(1);//at函数相当于operator[]，但是它会做参数检查，传入的索引超过元素数量时不会报错
	//vec1.empty();//返回一个Bool值，表示容器是否为空
	//vec1.front();//返回第一个元素
	//vec1.insert();//insert支持同时插入多个元素，常用在，将另一个Vector中的数据插入到当前vector数据的末尾
	//vec1.swap();//交换两个Vector中的数据
	//vec1.erase();//删除指定位置的元素，需要传入一个迭代器(指针)，这个迭代器指向你要删除的元素的位置
	//vec1.data();//返回内部封装的数组指针，
	//vec1.shrink_to_fit();//让capacity==size

	
	//1.
	Console console;
	console.show_menu();
	//2.
	int parm = console.get_params(); //接受键盘输入的指令，方便后面去处理
	//3.
	FileReader reader;
	MyVector2<FileData> fileData = reader.read_file("1234.csv");

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

