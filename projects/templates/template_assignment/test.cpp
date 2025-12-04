#include <iostream>

template <typename T>
class Array {
    private:
     T* data;
     size_t size;
     size_t capacity;

     //function to resize the array when full
    void resize() {
        capacity = (capacity == 0) ? 1: capacity *2;
        T* newData = new T[capacity];
        for (size_t i = 0; i < size; ++i){
            newData[i] = data[i];

        }
        delete[] data;
        data = newData;
    }
    public:
    Array() : data(nullptr), size(0), capacity(0) {}

    //destructor to free heap memory
    ~Array() {
        delete[] data;
    }
    //copy constructor
    Array(const Array& other) : size(other.size), capacity(other.capacity) {
        data = new T[capacity];
        for (size_t i=0; i<size; ++i) {
            data[i] = other.data[i];
        }
    }
    
    //create the add function to add elements to the array
    void add(const T& element) {
        if (size >= capacity) {
            resize();
        }
        //add the element to the array and increment the size
        data[size++] = element;
    }
    //print the array
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
};

int main() {
    Array<int> intArray;
    intArray.add(10);
    intArray.add(20);
    intArray.add(30);
    intArray.print();

    //test with doubles
    Array<double> doubleArray;
    doubleArray.add(3.14);
    doubleArray.add(2.71);
    doubleArray.print();

    //test with characters
    Array<char> charArray;
    charArray.add('H');
    charArray.add('e');
    charArray.add('l');
    charArray.add('l');
    charArray.add('o');
    charArray.print();

    Array<float> floatArray;
    floatArray.print();
    return 0;
}