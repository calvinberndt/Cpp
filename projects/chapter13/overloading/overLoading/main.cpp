#include <iostream>
using namespace std;

//This  will be used for a teaching example of operation overloading

class fun{
    private:
        int a;
    public:
        fun(int val) : a(val) {}
        void get() {
            cout << "Value of a: " << a << endl;
        }
};

class MyClass {
    private:
        int* data;
        int size;
    public:
    //Constructor
    MyClass(int s, int start) : size(s){
        data = new int[size];
        //initialziee data as needed
        for(int i = 0; i < size; ++i) {
            data[i] = (start + i) * (i + start);
        }
    }

    //display() function
    void display() const {
        for(int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    //Destructor
    ~MyClass() {
        delete[] data;
    }

    

    //Copy constructor assignment (deep copy)
    MyClass& operator=(const MyClass& other) {

        //ensure that we are not deleting the thing we are trying to point to
        if(this != &other){
            delete[] data;

            size = other.size;
            data = new int[size];

            for(int i = 0; i < size; i++){
                data[i] = other.data[i];
            }
        }
        return *this;
    }

};

int main() {
    fun f1(5), f2(10);
    f1.get();
    f1 = f2; //Using default assignment operator
    f1.get();

    MyClass obj1(6,1);
    obj1.display();

    MyClass obj2(5,2);
    obj2.display();

    obj2 = obj1; //Using default assignment operator
    obj2.display();

    return 0;
}
