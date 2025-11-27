//Header file for Set class

#ifndef SET_H
#define SET_H
class Set {
    private:
        int* elements;
        int numElements;
        //resize function
        void resize(int* elements, int numElements);
        
    public:
        Set(); // constructor
        //constructor taking two arguments
        Set(int* elements, int numElements);
        ~Set(); // destructor 
        // Accessor function. 
        void printSet();

        // operator overloading functions. 
        void operator+=(int n);
        void operator-=(int n);

        // Rule of Three (Safety)
        Set(const Set& other); // Copy Constructor
        const Set& operator=(const Set& other); // Copy Assignment Operator

        // this is where we're going to make our friends. 
        // this is the section where we grant permission for the friend to access Set's private fields
        // They will be declared outside of class set. Not within it because they are not of typeset functions. 
        friend Set operator+(const Set& a, const Set&b); // this is the union operator 
        friend Set operator*(const Set&a, const Set&b); // intersection 
        friend Set operator-(const Set&a, const Set&b); // difference 
};

#endif // SET_H

