
//���뻷��
//Debug������ģʽ��֧�ֶϵ�鿴����ֵ
//Release������ģʽ����������Գ�������Ż����Ż���ĳ������и��죬���ǲ��ܶϵ�鿴����ֵ
//x64����ʾ64λ���л��� CPUһ���Կ��Դ���64λ������
//x86����ʾ32λ���л��� CPUһ���Կ��Դ���32λ������

#include <string>

#include <iostream>
#include <vector>
#include <stack>
using std::string;

//ȫ��������ֻ�ܶ���ȫ�ֳ������궨��

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
			//���1
		}
		else
		{
			//���2
		}


		//��֧Ԥ��
		if (i > 0)
		{
			//���1
		}
		else if (i == 0)
		{
			//���2
		}
		else if (i < 0)
		{
			//���3
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

	//i����0 ����i<10 &&��ʾ��
	if (i > 0 && i < 10 && i < 5 && i>4) //��·��ֵ
	{
		//do something
	}

	// || 
	if (i > 0 || i < 10 || i < 5 || i>4)//��·��ֵ
	{
		//do something
	}

	if (i > 0 && i < 10 || i>5)
	{

	}

	//&& ||
	//& |

	i = i + 1; //������൱�� i++;
	i += 1;//i+1�൱�� ++i




	shape sp;

	shape& left_ref = sp; //��ֵ���ã���ֻ��������ֵ

	float&& right_ref = sp.area();//��ֵ���ã�������������ֵ
	const float& const_ref = sp.area();

	const char* str = "Hello World";



	auto area = sp.area(); //�ұߵı��ʽ������ֵ
	//��ߵı���������ֵ
	auto area2 = area;

	//��ֵ�ȿ��Է�����ߣ��ֿ��Է����ұ�
	//��ֵֻ�ܷ����ұ�

	return 0;
}



std::vector<int> get_vec()
{

	try
	{
		//����
		std::vector<int> vec(3);
		int a[4];
	}
	catch(std::exception& ex) //�����쳣�Ļ���
	{
		std::cout << ex.what() << std::endl;
	}


}

void func()
{
	while (true)
	{


	}


	//����ִ��һ��
	do
	{

	} while (true);


	std::vector<int> vec;
	for (auto i : get_vec())//ֻ�����ʼ��ʱ��ȥ����vec��
	{

		for (auto i : get_vec())
		{
			//���
			if (true)
			{
				goto label;
			}
		}
	}

label:
	//���2
}