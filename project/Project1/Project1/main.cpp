
//编译环境
//Debug：调试模式，支持断点查看变量值
//Release：发布模式，编译器会对程序进行优化，优化后的程序运行更快，但是不能断点查看变量值
//x64：表示64位运行环境 CPU一次性可以处理64位二进制
//x86：表示32位运行环境 CPU一次性可以处理32位二进制

#include <string>

#include <iostream>
#include <vector>
#include <stack>
using std::string;

//全局作用域只能定义全局常量，宏定义

class Test
{

	void func()
	{

		if (true)
		{

		}


		int i = 0;
		if (i > 0)
		{
			//语句1
		}
		else
		{
			//语句2
		}


		//分支预测
		if (i > 0)
		{
			//语句1
		}
		else if (i == 0)
		{
			//语句2
		}
		else if (i < 0)
		{
			//语句3
		}

	}
	//...
};


struct test1
{
	char a;
	int b;
	int* c;
};


int main()
{
	sizeof(test1);
	auto size1 = sizeof(int);
	std::cout << size1 << std::endl;

	int i = 5;

	//i大于0 并且i<10 &&表示与
	if (i > 0 && i < 10 && i < 5 && i>4) //短路求值
	{
		//do something
	}

	// || 
	if (i > 0 || i < 10 || i < 5 || i>4)//短路求值
	{
		//do something
	}

	if (i > 0 && i < 10 || i>5)
	{

	}

	//&& ||
	//& |

	i = i + 1; //这里的相当于 i++;
	i += 1;//i+1相当于 ++i




	shape sp;

	shape& left_ref = sp; //左值引用，它只能引用左值

	float&& right_ref = sp.area();//右值引用，它可以引用右值
	const float& const_ref = sp.area();

	const char* str = "Hello World";



	auto area = sp.area(); //右边的表达式它是右值
	//左边的变量它是左值
	auto area2 = area;

	//左值既可以放在左边，又可以放在右边
	//右值只能放在右边

	return 0;
}



std::vector<int> get_vec()
{

	try
	{
		//代码
		std::vector<int> vec(3);
		int a[4];
	}
	catch(std::exception& ex) //所有异常的基类
	{
		std::cout << ex.what() << std::endl;
	}


}

void func()
{
	while (true)
	{


	}


	//至少执行一次
	do
	{

	} while (true);


	std::vector<int> vec;
	for (auto i : get_vec())//只会在最开始的时候去访问vec，
	{

		for (auto i : get_vec())
		{
			//语句
			if (true)
			{
				goto label;
			}
		}
	}

label:
	//语句2
}