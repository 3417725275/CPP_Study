
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
	//��ͨforѭ��
	for (std::vector<shape>::iterator it = shapes_vec.begin(); it != shapes_vec.end(); ++it)
	{
		it->area();
		*it;
	}

	//��Χfor
	for (shape obj : shapes_vec)
	{
		obj.area();//�޸�obj�����޸�shapes_vec�е�ֵ

	}



}

