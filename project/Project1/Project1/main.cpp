
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


//��ֵ����ֵ
//��ֵ��������ʱ��ֵ��������ʽ��
//��ֵ�����ǳ��õ�ֵ���������
int main()
{


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

