
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

class Test
{

	//...
};

class shape
{
public:
	float area() {
		//XXXXX
		return _area;
	}

	Test get_test()
	{
		//...
	}

	void set(float val)
	{
		_area = val;
	}
	float get()
	{
		return _area;
	}
private:
	float _area;
};


//左值和右值
//右值表达的是临时的值，例如表达式，
//左值表达的是长久的值，比如变量
int main()
{


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

