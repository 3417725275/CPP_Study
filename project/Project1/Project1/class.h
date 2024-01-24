#pragma once
#include <iostream>


class SecondClass
{
public:
	//如果没有自定义的构造函数，那么编译器会自动生成一个默认的构造函数
	SecondClass() : m_money(20.0f), m_age(10) //按照类的成员变量的声明顺序进行初始化
	{
		std::cout << "默认构造函数被调用了" << std::endl;
	}





public:

	int m_age;
	float m_money;

};


class FirstClass
{
	//构造、拷贝构造、析构、移动构造、移动赋值、拷贝赋值
public:
	//构造
	FirstClass()
	{//
		std::cout << "构造函数被调用了" << std::endl;
	}

	//拷贝构造
	FirstClass(const FirstClass& other) {
		std::cout << "拷贝构造函数被调用了" << std::endl;
	}

	//拷贝赋值 operator是关键字，重载一些系统的运算符 
	FirstClass& operator=(const FirstClass& other)
	{
		std::cout << "拷贝 赋值 函数被调用了" << std::endl;
		return *this; //返回当前对象的引用
	}

	//移动赋值
	FirstClass& operator=(FirstClass&& other)
	{
		std::cout << "移动 赋值 函数被调用了" << std::endl;
		return *this;
	}

	//移动构造
	FirstClass(const FirstClass&& other)
	{
		std::cout << "移动构造函数被调用了" << std::endl;
	}

	//析构
	~FirstClass()
	{
		std::cout << "~析构函数被调用了" << std::endl;
	}






};