#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    size_t size;
    size_t capacity;

    void resize() {
        capacity = (capacity == 0) ? 1 : capacity * 2;
        T* newData = new T[capacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    // Constructor
    Array() : data(nullptr), size(0), capacity(0) {}

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Copy constructor
    Array(const Array& other) : size(other.size), capacity(other.capacity) {
        data = new T[capacity];
        for (size_t i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    // Copy assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            size = other.size;
            capacity = other.capacity;
            data = new T[capacity];
            for (size_t i = 0; i < size; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    // Add element to the end of the array
    void add(const T& element) {
        if (size >= capacity) {
            resize();
        }
        data[size++] = element;
    }

    // Print all elements in the array
    void print() const {
        std::cout << "[";
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i];
            if (i < size - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    // Get current size
    size_t getSize() const {
        return size;
    }
};

int main() {
    // Test with integers
    std::cout << "Testing with integers:" << std::endl;
    Array<int> intArray;
    intArray.add(10);
    intArray.add(20);
    intArray.add(30);
    intArray.add(40);
    intArray.print();
    std::cout << "Size: " << intArray.getSize() << std::endl;
    std::cout << std::endl;

    // Test with doubles
    std::cout << "Testing with doubles:" << std::endl;
    Array<double> doubleArray;
    doubleArray.add(3.14);
    doubleArray.add(2.71);
    doubleArray.add(1.41);
    doubleArray.print();
    std::cout << "Size: " << doubleArray.getSize() << std::endl;
    std::cout << std::endl;

    // Test with characters
    std::cout << "Testing with characters:" << std::endl;
    Array<char> charArray;
    charArray.add('H');
    charArray.add('e');
    charArray.add('l');
    charArray.add('l');
    charArray.add('o');
    charArray.print();
    std::cout << "Size: " << charArray.getSize() << std::endl;

    return 0;
}
