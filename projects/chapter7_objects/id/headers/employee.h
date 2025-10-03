#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <list>
using namespace std;
//ID Generator Class for ID Generator

class Employee {
    private:
        string name;
        static int id;
        static list<int> unusedIds;
        int empID;
    public:
        Employee(string name);
        Employee();
        Employee(const Employee &e);
        ~Employee();

        string getName() const;
        void static addID(Employee &e);
        void static subtractID(Employee &e);

};

#endif