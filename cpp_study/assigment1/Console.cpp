#include "Console.h"
#include <iostream>


void Console::show_menu()
{
	//thisָ���ʾ��ǰ�����ָ��,Ԥ�����
	//thisָ��ֻ����ĺ�������Ч
	//thisָ�����ڷ��ʺ����Լ��ĳ�Ա����Ա�����ͳ�Ա������
	//this����ǿ��Ҫ��д,��д��ʱ�򣬵���������Լ��ĳ�Աʱ��Ĭ����this
	//���ʺ�����ʱ�����ȷ������������ı����ͺ���
	std::cout << this->_menu << std::endl;
}

int Console::get_params()
{
	std::cout << "������˵�ѡ��" << std::endl;
	int number;
	std::cin >> number;

	std::cout << "����Ĳ����� " << number << std::endl;
	return number;
}

