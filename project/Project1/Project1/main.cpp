
#include <iostream>
#include <vector>
#include "class.h"
#include "SSD.h" //宏操作是程序编译的第一个步骤
#include "ThirdClass.h"

#include <iostream>

class A {
public:
	int* pointer;

	// 构造函数
	A(int val) : pointer(new int(val)) { }

	// 拷贝赋值函数
	A& operator=(const A& other) {
		if (this != &other) { // 防止自赋值
			delete pointer; // 释放旧资源
			pointer = new int(*other.pointer); // 拷贝新资源
		}
		std::cout << "调用了拷贝赋值函数\n";
		return *this;
	}

	// 移动赋值函数
	A& operator=(A&& other) {
		if (this != &other) {
			delete pointer; // 释放旧资源
			pointer = other.pointer; // 移动资源
			other.pointer = nullptr; // 确保被移动对象不再指向资源
		}
		std::cout << "调用了移动赋值函数\n";
		return *this;
	}

	~A() {
		delete pointer;
	}
};



using namespace std;

//右值指的是一些临时的表达式
//比如   1+1  函数的返回值  
//右值是只能够放在=右边的值
int main(int argc, char** argv)
{

	std::cout << "Start" << std::endl;
	{

		FirstClass first;
		FirstClass second = first;




	}
	std::cout << "End" << std::endl;
	A a1(10), a2(20);
	A a3(30);
	a1 = a2; // 这会调用拷贝赋值函数
	a3 = std::move(a2); // 这会调用移动赋值函数


}

//函数类型


