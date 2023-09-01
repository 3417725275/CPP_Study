#pragma  once
#include <iostream>
#include <stdexcept>

//ģ��Ķ���  template<typename T> T ģ�����Ͳ���
//ģ�����Ͳ��������ж�������ֲ����ظ�
//ģ����ģ���࣬��ģ�庯������ģ�����
//typename�ؼ��ֿ�����class ����,Ч��һ��
//ģ���������Ϊ����ȡ���ô���,�ѹ����Ĳ��ֳ�����������Ĳ�����T��ʾ


//���һ��int����
// class MyVector {int * data}
//���һ��string ����
//  class MyVector {string * data}
//���һ��double����
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
	/// ���������ڴ��С
	/// </summary>
	/// <param name="newCapacity">�����β�</param>
	void reserve(size_t newCapacity) {
		//��һ:
		if (newCapacity > capacity) {
			T* newData = new T[newCapacity]; //������newData�洢���ǵ�0��Ԫ�صĵ�ַ
			for (size_t i = 0; i < size; ++i) {
				newData[i] = data[i];
			}
			delete[] data;//�ͷžɵ��ڴ�
			this->data = newData;//�ı�data��ָ������ָ���һ��Ԫ��
			capacity = newCapacity;
		}
		//����:
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


