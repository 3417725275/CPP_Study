#include <iostream>
#include <stdexcept>

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
        delete[] data;
    }

    size_t getSize() const {
        return size;
    }

    size_t getCapacity() const {
        return capacity;
    }

    void pushBack(const T& value) {
        if (size == capacity) {
            // Double the capacity if full
            reserve(capacity == 0 ? 1 : capacity * 2);
        }
        data[size++] = value;
    }

    void reserve(size_t newCapacity) {
        if (newCapacity > capacity) {
            T* newData = new T[newCapacity];
            for (size_t i = 0; i < size; ++i) {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
            capacity = newCapacity;
        }
    }

    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }
};

int main() {
    MyVector<int> myVec;
    myVec.pushBack(1);
    myVec.pushBack(2);
    myVec.pushBack(3);

    for (size_t i = 0; i < myVec.getSize(); ++i) {
        std::cout << myVec[i] << " ";
    }

    return 0;
}
