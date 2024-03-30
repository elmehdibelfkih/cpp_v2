#include <iostream>
#include <vector>

template<typename T>
class MyContainer {
private:
    T* data;
    size_t size;
public:
    // Iterator class declaration
    class Iterator;

    MyContainer(size_t s) : size(s) {data = new T[size];}
    ~MyContainer() {delete[] data;}
    T& operator[](size_t index) {return data[index];}

    // Iterator begin
    Iterator begin() {
        return Iterator(data);
    }

    // Iterator end
    Iterator end() {
        return Iterator(data + size);
    }
};

// Iterator class definition
template<typename T>
class MyContainer<T>::Iterator {
private:
    T* ptr;
public:
    // Constructor
    Iterator(T* p) : ptr(p) {}
    // Dereference operator
    T& operator*() {return *ptr;}
    // Prefix increment operator
    Iterator& operator++() {
        ++ptr;
        return *this;
    }
    // Postfix increment operator
    Iterator operator++(int) {
        Iterator temp = *this;
        ++ptr;
        return temp;
    }
    // Equality operator
    bool operator==(const Iterator& other) const {
        return ptr == other.ptr;
    }
    // Inequality operator
    bool operator!=(const Iterator& other) const {
        return ptr != other.ptr;
    }
};

int main() {
    MyContainer<int> container(5);

    // Initialize container
    for (int i = 0; i < 5; ++i) {
        container[i] = i * 2;
    }
    std::vector<int> mehdi;
    mehdi.push_back(1);
    mehdi.push_back(1);
    mehdi.push_back(3);
    mehdi.push_back(4);
    mehdi.push_back(5);

    std::cout << "my first element : " << *(mehdi.begin() + 2) << std::endl;
    // Use iterator to print container elements
    for (MyContainer<int>::Iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
