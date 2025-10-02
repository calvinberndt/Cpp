#include <iostream>
#include "../headers/employee.h"

std::string Employee::getName() const {
    return name;
}
#include <string>
using namespace std;

int Employee::id = 1000;

Employee::Employee(string name) : name(name) {
    cout << "Employee Name: " << name << " ID: " << id << endl;
    addID(*this);
}

void Employee::addID(Employee &e) {
    e.id++;
}

void Employee::subtractID(Employee &e) {
    e.id--;
}

int Employee::getID(){
    return id;
}

Employee::Employee() : name("No Name") {
    cout << "Employee Name: " << name << " ID: " << id << endl;
    addID(*this);
} 

Employee::Employee(const Employee &e) : name(e.name) {
    cout << "Employee Name: " << name << " ID: " << id << endl;
    addID(*this);
}

Employee::~Employee() {
    cout << "Employee Name: " << name << " ID: " << id << " destroyed." << endl;
    subtractID(*this);
}