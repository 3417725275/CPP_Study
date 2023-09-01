#pragma once
#include <exception>
#include <vcruntime_string.h>




class MyVector
{

private:
	int* _data;
	size_t _size; //元素数量
	size_t _capacity; //容量

public:
	//构造函数
	MyVector()
	{
		_data = nullptr;//指针初始化
		_size = 0;
		_capacity = 0;
	}

	//通过 explicit关键字修饰带参的构造函数，可以避免隐式转换
	explicit MyVector(size_t capacity)
	{
		_data = new int[capacity];
		_size = 0;
		_capacity = capacity;
	}


	//如果不自定义 构造函数/拷贝构造函数/析构函数/移动构造函数/拷贝赋值函数/移动赋值函数
	//那么编译器会自动生成一个

	//拷贝构造函数
	MyVector(MyVector& other)
	{
		this->operator=(other);
	}

	MyVector& operator=(MyVector& other)
	{
		//1.参数合法性检查
		//引用的话不需要做参数合法性检查
		//如果是指针，需要做参数合法性检查 ,1.判断指针是否为空，2.判断指针和你当前对象是否是同一个地址（扩展）

		//2.创建新的数组，把other中的数据拷贝过来
		int* newData = new int[other.Capacity()];

		//C语言的系统接口
		//第一个参数新内存地址
		//第二个参数原数据地址 
		//第三个拷贝的内存大小
		memcpy(newData, other._data, sizeof(int) * other._size);

		//删除旧数据(我们自己)
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
		return _data; //0是下标，是第一个元素
	}

	void push_back(const int value)
	{

		if (_capacity == _size)
		{
			//扩容
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
		//1.参数合法性检查
		if (newCapacity > _capacity)
		{
			//2.创建新的数组
			int* newData = new int[newCapacity];
			//3.将旧数据拷贝到新地址
			for (size_t i = 0; i < _size; ++i)
			{
				newData[i] = _data[i];
			}
			//4.释放旧空间
			delete[] _data;
			//5.改变指针指向
			_data = newData;
			//6.改变容量大小
			_capacity = newCapacity; //如果不更新容量值，下次内存扩容时，会和旧的容量值进行比较
		}
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name="index">函数形参，需要外部传入进来</param>
	/// <returns></returns>
	int operator[](size_t index)
	{
		//1.参数合法性检查
		if (index >= _size)
		{
			//throw关键字表示抛出异常，异常是一个类，我们需要抛出一个异常对象
			//它会强行终止函数的执行,你需要在外部处理异常，如果不处理异常，程序会直接终止

			try
			{
				//表示这部分语句可能会抛出异常
				throw std::exception("这里异常");
			}
			catch (const std::exception& ex) //捕获异常
			{
				//这里处理异常,处理之后程序继续执行
				//std::cout<<ex.what()<<std::endl
			}

		}
		else
		{
			return _data[index];
		}
	}

};



//MyVector vector = 10; //发生了一个隐式转换
//这里相当于MyVector vector= MyVector(10);
//
//MyVector vec1;
//MyVector vec2;
//vec2 = vec1; //调用的是拷贝赋值vec2.operator=(vec1);
//vec2.operator=(vec1);
//
//MyVector vec3(vec1); //这里调用的是拷贝构造函数MyVector(MyVector&)




