
//编译环境
//Debug：调试模式，支持断点查看变量值
//Release：发布模式，编译器会对程序进行优化，优化后的程序运行更快，但是不能断点查看变量值
//x64：表示64位运行环境 CPU一次性可以处理64位二进制
//x86：表示32位运行环境 CPU一次性可以处理32位二进制

#include <string>

#include <iostream>
#include <vector>
using std::string;

using string = std::basic_string<char>;

void fun2();
int main()
{
	int size = 100;
	int a[10];
	int* b = new int[size];

	//std::vector<int> vec={ 1,2,3 };
	std::vector<string> str{ 10 };
	fun2();
	str.push_back("112");

	std::cout << str.size() << std::endl;
	for (auto item : str)
	{
		std::cout << "item " << item << std::endl;
	}


}

void fun2()
{
	string str1 = "Hello";
	string str2 = "World";


	const char* str3 = "Hello";
	const char* str4 = "ni hao";



	auto re = str3 + str1; //自动转换const char* 到string对象
	//过程相当于  string temp(str3);
	//auto re =str1+ temp
	//auto re = str3 + str4;//指针不能直接相加

	//以上规则不仅仅适用于+号，也适用于== !=


	if (str3 == str4) //如果直接比较const char* 比较的是指针的地址
	{
		std::cout << "yes" << std::endl;
	}

	string str5 = "Hello" + str1 + "World"; //错误，字面值不能直接相加
}

void fun1()
{
	string str = "Hello World";


	auto size = str.size();
	auto c = str[2];
	auto cc = str.c_str(); //将string类型的变量转换成const char*变量

	auto position = str.find("byebye");
	if (position == std::string::npos) //npos表示的是一个位置
	{
		std::cout << "can not find it" << std::endl;
	}
	else
	{
		std::cout << "has this string" << std::endl;
	}

	std::cout << position << std::endl;
}