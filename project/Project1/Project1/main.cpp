
//���뻷��
//Debug������ģʽ��֧�ֶϵ�鿴����ֵ
//Release������ģʽ����������Գ�������Ż����Ż���ĳ������и��죬���ǲ��ܶϵ�鿴����ֵ
//x64����ʾ64λ���л��� CPUһ���Կ��Դ���64λ������
//x86����ʾ32λ���л��� CPUһ���Կ��Դ���32λ������

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



	auto re = str3 + str1; //�Զ�ת��const char* ��string����
	//�����൱��  string temp(str3);
	//auto re =str1+ temp
	//auto re = str3 + str4;//ָ�벻��ֱ�����

	//���Ϲ��򲻽���������+�ţ�Ҳ������== !=


	if (str3 == str4) //���ֱ�ӱȽ�const char* �Ƚϵ���ָ��ĵ�ַ
	{
		std::cout << "yes" << std::endl;
	}

	string str5 = "Hello" + str1 + "World"; //��������ֵ����ֱ�����
}

void fun1()
{
	string str = "Hello World";


	auto size = str.size();
	auto c = str[2];
	auto cc = str.c_str(); //��string���͵ı���ת����const char*����

	auto position = str.find("byebye");
	if (position == std::string::npos) //npos��ʾ����һ��λ��
	{
		std::cout << "can not find it" << std::endl;
	}
	else
	{
		std::cout << "has this string" << std::endl;
	}

	std::cout << position << std::endl;
}