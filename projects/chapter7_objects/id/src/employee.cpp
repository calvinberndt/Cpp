#include <iostream>
#include "../headers/employee.h"
#include <string>
using namespace std;

int Employee::id = 1000;

Employee::Employee(string name) : name(name) {
    cout << "Employee " << name << " created." << endl;
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
    cout << "Employee " << name << " created." << endl;
    addID(*this);
} 

Employee::Employee(const Employee &e) : name(e.name) {
    cout << "Employee " << name << " created by copy." << endl;
    addID(*this);
}

Employee::~Employee() {
    cout << "Employee "  << name << "destroyed," << "with the ID of" << getID << endl;
    subtractID(*this);
    
}

