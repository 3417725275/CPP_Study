#pragma once
#include <exception>
#include <vcruntime_string.h>




class MyVector
{

private:
	int* _data;
	size_t _size; //Ԫ������
	size_t _capacity; //����

public:
	//���캯��
	MyVector()
	{
		_data = nullptr;//ָ���ʼ��
		_size = 0;
		_capacity = 0;
	}

	//ͨ�� explicit�ؼ������δ��εĹ��캯�������Ա�����ʽת��
	explicit MyVector(size_t capacity)
	{
		_data = new int[capacity];
		_size = 0;
		_capacity = capacity;
	}


	//������Զ��� ���캯��/�������캯��/��������/�ƶ����캯��/������ֵ����/�ƶ���ֵ����
	//��ô���������Զ�����һ��

	//�������캯��
	MyVector(MyVector& other)
	{
		this->operator=(other);
	}

	MyVector& operator=(MyVector& other)
	{
		//1.�����Ϸ��Լ��
		//���õĻ�����Ҫ�������Ϸ��Լ��
		//�����ָ�룬��Ҫ�������Ϸ��Լ�� ,1.�ж�ָ���Ƿ�Ϊ�գ�2.�ж�ָ����㵱ǰ�����Ƿ���ͬһ����ַ����չ��

		//2.�����µ����飬��other�е����ݿ�������
		int* newData = new int[other.Capacity()];

		//C���Ե�ϵͳ�ӿ�
		//��һ���������ڴ��ַ
		//�ڶ�������ԭ���ݵ�ַ 
		//�������������ڴ��С
		memcpy(newData, other._data, sizeof(int) * other._size);

		//ɾ��������(�����Լ�)
		delete[] _data;

		_data = newData;
		_capacity = other.Capacity();

	}


	~MyVector()
	{
		delete[] _data;
	}


public:
	size_t Size()
	{
		return _size;
	}

	size_t Capacity()
	{
		return _capacity;
	}
	
	int* begin()
	{
		return _data; //0���±꣬�ǵ�һ��Ԫ��
	}

	void push_back(const int value)
	{

		if (_capacity == _size)
		{
			//����
			if (_capacity == 0)
			{
				reserve(1);
			}
			else
			{
				reserve(_capacity * 2);
			}
		}
		_size++;
		this->_data[_size] = value;
	}

	void reserve(size_t newCapacity)
	{
		//1.�����Ϸ��Լ��
		if (newCapacity > _capacity)
		{
			//2.�����µ�����
			int* newData = new int[newCapacity];
			//3.�������ݿ������µ�ַ
			for (size_t i = 0; i < _size; ++i)
			{
				newData[i] = _data[i];
			}
			//4.�ͷžɿռ�
			delete[] _data;
			//5.�ı�ָ��ָ��
			_data = newData;
			//6.�ı�������С
			_capacity = newCapacity; //�������������ֵ���´��ڴ�����ʱ����;ɵ�����ֵ���бȽ�
		}
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="index">�����βΣ���Ҫ�ⲿ�������</param>
	/// <returns></returns>
	int operator[](size_t index)
	{
		//1.�����Ϸ��Լ��
		if (index >= _size)
		{
			//throw�ؼ��ֱ�ʾ�׳��쳣���쳣��һ���࣬������Ҫ�׳�һ���쳣����
			//����ǿ����ֹ������ִ��,����Ҫ���ⲿ�����쳣������������쳣�������ֱ����ֹ

			try
			{
				//��ʾ�ⲿ�������ܻ��׳��쳣
				throw std::exception("�����쳣");
			}
			catch (const std::exception& ex) //�����쳣
			{
				//���ﴦ���쳣,����֮��������ִ��
				//std::cout<<ex.what()<<std::endl
			}

		}
		else
		{
			return _data[index];
		}
	}

};



//MyVector vector = 10; //������һ����ʽת��
//�����൱��MyVector vector= MyVector(10);
//
//MyVector vec1;
//MyVector vec2;
//vec2 = vec1; //���õ��ǿ�����ֵvec2.operator=(vec1);
//vec2.operator=(vec1);
//
//MyVector vec3(vec1); //������õ��ǿ������캯��MyVector(MyVector&)




