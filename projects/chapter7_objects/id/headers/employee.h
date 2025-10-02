#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

//ID Generator Class for ID Generator

class Employee {
    private:
        string name;
        static int id;
    public:
        Employee(string name);
        Employee();
        Employee(const Employee &e);
        ~Employee();

        string getName() const;
        void static addID(Employee &e);
        static int getID();
        void static subtractID(Employee &e);

};

#endif