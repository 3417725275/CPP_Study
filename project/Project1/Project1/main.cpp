#include <iostream>
using namespace std;
struct Test
{
	char ch;
	char c;
	int id;
};

int main()
{
	//std::cout << "Alignment of int: " << alignof(int) << std::endl;
	//std::cout << "Alignment of double: " << alignof(double) << std::endl;
	// ������Ӹ��������Լ�����ǵĶ��뷽ʽ
	constexpr int st = sizeof(int);
	constexpr int ss = sizeof(short);
	constexpr int size = sizeof(Test);

	std::cout << size << std::endl;
}