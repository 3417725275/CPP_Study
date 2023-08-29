#include "Console.h"
#include <iostream>


void Console::show_menu()
{
	//this指针表示当前对象的指针,预定义的
	//this指针只在类的函数中有效
	//this指针用于访问函数自己的成员（成员变量和成员函数）
	//this不是强制要求写,不写的时候，当调用类的自己的成员时，默认是this
	//访问函数的时候，优先访问最近作用域的变量和函数
	std::cout << this->_menu << std::endl;
}

int Console::get_params()
{
	std::cout << "请输入菜单选项" << std::endl;
	int number;
	std::cin >> number;

	std::cout << "输入的参数是 " << number << std::endl;
	return number;
}

