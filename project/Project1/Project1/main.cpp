
#include <iostream>
#include <vector>
#include "class.h"
#include "SSD.h" //������ǳ������ĵ�һ������
#include "ThirdClass.h"

#include <iostream>

class A {
public:
	int* pointer;

	// ���캯��
	A(int val) : pointer(new int(val)) { }

	// ������ֵ����
	A& operator=(const A& other) {
		if (this != &other) { // ��ֹ�Ը�ֵ
			delete pointer; // �ͷž���Դ
			pointer = new int(*other.pointer); // ��������Դ
		}
		std::cout << "�����˿�����ֵ����\n";
		return *this;
	}

	// �ƶ���ֵ����
	A& operator=(A&& other) {
		if (this != &other) {
			delete pointer; // �ͷž���Դ
			pointer = other.pointer; // �ƶ���Դ
			other.pointer = nullptr; // ȷ�����ƶ�������ָ����Դ
		}
		std::cout << "�������ƶ���ֵ����\n";
		return *this;
	}

	~A() {
		delete pointer;
	}
};



using namespace std;

//��ֵָ����һЩ��ʱ�ı��ʽ
//����   1+1  �����ķ���ֵ  
//��ֵ��ֻ�ܹ�����=�ұߵ�ֵ
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
	a1 = a2; // �����ÿ�����ֵ����
	a3 = std::move(a2); // �������ƶ���ֵ����


}

//��������


