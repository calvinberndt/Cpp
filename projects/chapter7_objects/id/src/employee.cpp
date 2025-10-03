#include <iostream>
#include "../headers/employee.h"
#include <string>
using namespace std;

int Employee::id = 1000;
list<int> Employee::unusedIds;

Employee::Employee(string name) : name(name) {
    addID(*this);
    cout << "Employee Name: " << name << " ID: " << empID << endl;
}

Employee::Employee() : name("No Name") {
    addID(*this);
    cout << "Employee Name: " << name << " ID: " << empID << endl;
}

Employee::Employee(const Employee &e) : name(e.name) {
    addID(*this);
    cout << "Employee Name: " << name << " ID: " << empID << endl;
}

Employee::~Employee() {
    cout << "Employee Name: " << name << " ID: " << empID << " destroyed." << endl;
    subtractID(*this);
}

void Employee::addID(Employee &e) {
    if(!unusedIds.empty()) {
        e.empID = unusedIds.front();
        unusedIds.pop_front();
        return;
    }
    e.empID = id;;
    e.id++;
}

void Employee::subtractID(Employee &e) {
    unusedIds.push_back(e.empID);
}

int Employee::getID(){
    return id;
}

string Employee::getName() const {
    return name;
}