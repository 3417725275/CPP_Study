#pragma once
#include <iostream>


class SecondClass
{
public:
	//���û���Զ���Ĺ��캯������ô���������Զ�����һ��Ĭ�ϵĹ��캯��
	SecondClass() : m_money(20.0f), m_age(10) //������ĳ�Ա����������˳����г�ʼ��
	{
		std::cout << "Ĭ�Ϲ��캯����������" << std::endl;
	}





public:

	int m_age;
	float m_money;

};


class FirstClass
{
	//���졢�������졢�������ƶ����졢�ƶ���ֵ��������ֵ
public:
	//����
	FirstClass()
	{//
		std::cout << "���캯����������" << std::endl;
	}

	//��������
	FirstClass(const FirstClass& other) {
		std::cout << "�������캯����������" << std::endl;
	}

	//������ֵ operator�ǹؼ��֣�����һЩϵͳ������� 
	FirstClass& operator=(const FirstClass& other)
	{
		std::cout << "���� ��ֵ ������������" << std::endl;
		return *this; //���ص�ǰ���������
	}

	//�ƶ���ֵ
	FirstClass& operator=(FirstClass&& other)
	{
		std::cout << "�ƶ� ��ֵ ������������" << std::endl;
		return *this;
	}

	//�ƶ�����
	FirstClass(const FirstClass&& other)
	{
		std::cout << "�ƶ����캯����������" << std::endl;
	}

	//����
	~FirstClass()
	{
		std::cout << "~����������������" << std::endl;
	}






};