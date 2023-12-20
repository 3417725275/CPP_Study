
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

//

class shape
{
public:
	void area() {

	}
};


int main()
{


	const char* str = "Hello World";
	
	std::vector<shape> shapes_vec(10);
	//普通for循环
	for (std::vector<shape>::iterator it = shapes_vec.begin(); it != shapes_vec.end(); ++it)
	{
		it->area();
		*it;
	}

	//范围for
	for (shape obj : shapes_vec)
	{
		obj.area();//修改obj不会修改shapes_vec中的值

	}



}

