#pragma  once
#include <iostream>
#include <stdexcept>

//模板的定义  template<typename T> T 模板类型参数
//模板类型参数可以有多个，名字不能重复
//模板有模板类，有模板函数，有模板变量
//typename关键字可以用class 代替,效果一样
//模板的作用是为了提取公用代码,把公共的部分抽象出来，差别的部分用T表示


//存放一组int数据
// class MyVector {int * data}
//存放一组string 数据
//  class MyVector {string * data}
//存放一组double数据
// class MyVector { double* data }

template <typename T>
class MyVector {
private:
	T* data;
	size_t size;
	size_t capacity;

public:
	MyVector() : data(nullptr), size(0), capacity(0) {}

	explicit MyVector(size_t initialCapacity) : size(0), capacity(initialCapacity) {
		data = new T[capacity];
	}

	~MyVector() {
		//delete[] data;
	}

	size_t Size() const {
		return size;
	}

	size_t Capacity() const {
		return capacity;
	}

	void push_back(const T& value) {
		if (size == capacity) {
			// Double the capacity if full
			int newCapacity = capacity;
			if (capacity == 0)
			{
				newCapacity = 1;
			}
			else
			{
				newCapacity = capacity * 2;
			}
			this->reserve(newCapacity);
		}
		data[size++] = value;
	}
	/// <summary>
	/// 重新申请内存大小
	/// </summary>
	/// <param name="newCapacity">函数形参</param>
	void reserve(size_t newCapacity) {
		//法一:
		if (newCapacity > capacity) {
			T* newData = new T[newCapacity]; //数组名newData存储的是第0个元素的地址
			for (size_t i = 0; i < size; ++i) {
				newData[i] = data[i];
			}
			delete[] data;//释放旧的内存
			this->data = newData;//改变data的指向，让他指向第一个元素
			capacity = newCapacity;
		}
		//法二:
		//memcpy(newData, data, sizeof(T) * size);
		//delete[] data;
		//data = newData;
		//capacity = newCapacity;
	}

	T& operator[](size_t index) {
		if (index >= size) {
			throw std::out_of_range("Index out of bounds");
		}
		return data[index];
	}
};


