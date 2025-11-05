#include <iostream>
#include <string>

// ============================================================================
// LESSON: Inheritance in C++
// ============================================================================
// 
// A student IS-A person. This is a classic inheritance relationship.
// The Student class inherits from the Person class, meaning it:
// - Gains access to all public members of Person
// - Doesn't need to re-define already inherited members
// - Can add its own specific members (like GPA for a student)
//
// ============================================================================

// BASE CLASS: Person
// This is the parent class that defines what all persons have in common.
class Person {
protected:  // 'protected' allows derived classes to access these members
    std::string identity;

private:
    std::string SSN;

public:
    // Constructor: Initialize the person with an identity
    Person(const std::string& id) : identity(id) {
        std::cout << "Person constructor called for: " << identity << std::endl;
    }

    // Getter method to access identity (read-only from outside)
    std::string getIdentity() const {
        return identity;
    }

    // Virtual method for polymorphic behavior
    virtual void displayInfo() const {
        std::cout << "Person: " << identity << std::endl;
    }

    // Virtual destructor is important when using inheritance!
    virtual ~Person() {
        std::cout << "Person destructor called for: " << identity << std::endl;
    }
};

// ============================================================================

// DERIVED CLASS: Student
// The Student class inherits from Person using the ':' syntax.
// Key points:
// 1. Student automatically has the 'identity' member from Person
// 2. We only need to add GPA, which is specific to students
// 3. We inherit all Person methods (constructors, getters, etc.)
class Student : public Person {  // public inheritance = "is-a" relationship
private:
    double gpa;  // NEW member specific to Student

public:
    // Constructor: Initialize both inherited and new members
    // We call the parent constructor using Member Initializer List
    Student(const std::string& id, double studentGpa) 
        : Person(id),  // Call parent constructor to initialize 'identity' through invocation
          gpa(studentGpa) {
        std::cout << "Student constructor called with GPA: " << gpa << std::endl;
    }

    // Getter for GPA (Student-specific data)
    double getGpa() const {
        return gpa;
    }

    // Setter for GPA
    void setGpa(double newGpa) {
        if (newGpa >= 0.0 && newGpa <= 4.0) {
            gpa = newGpa;
            std::cout << "GPA updated to: " << gpa << std::endl;
        } else {
            std::cout << "Invalid GPA value. Must be between 0.0 and 4.0" << std::endl;
        }
    }

    // Override the parent's displayInfo method
    void displayInfo() const override {
        std::cout << "Student: " << identity << " | GPA: " << gpa << std::endl;
    }

    // Note: We inherit the destructor behavior, but could override if needed
    ~Student() {
        std::cout << "Student destructor called for: " << identity << std::endl;
    }
};

// ============================================================================

int main() {
    std::cout << "\n=== INHERITANCE DEMONSTRATION ===" << std::endl;
    std::cout << "\n--- Creating a Person object ---" << std::endl;
    
    // Create a base class object
    Person person1("John Doe");
    person1.displayInfo();

    std::cout << "\n--- Creating a Student object ---" << std::endl;
    
    // Create a derived class object
    // Notice: We only provide identity and gpa
    // We don't manually initialize 'identity' twice!
    Student student1("Alice Smith", 3.85);
    student1.displayInfo();

    std::cout << "\n--- Demonstrating Student-specific methods ---" << std::endl;
    
    // Student-specific functionality
    std::cout << "Alice's identity: " << student1.getIdentity() << std::endl;
    std::cout << "Alice's GPA: " << student1.getGpa() << std::endl;

    std::cout << "\n--- Updating GPA ---" << std::endl;
    student1.setGpa(3.92);
    student1.displayInfo();

    std::cout << "\n--- Attempting invalid GPA ---" << std::endl;
    student1.setGpa(5.0);  // This will fail validation

    std::cout << "\n--- Creating another Student ---" << std::endl;
    Student student2("Bob Johnson", 3.45);
    student2.displayInfo();

    std::cout << "\n--- Polymorphism: Using base class pointer ---" << std::endl;
    
    // This demonstrates polymorphism - a core benefit of inheritance
    Person* p1 = &person1;
    Person* p2 = &student1;
    Person* p3 = &student2;

    std::cout << "Calling displayInfo() through Person pointers:" << std::endl;
    p1->displayInfo();  // Calls Person::displayInfo
    p2->displayInfo();  // Calls Student::displayInfo (polymorphic!)
    p3->displayInfo();  // Calls Student::displayInfo

    std::cout << "\n=== END OF PROGRAM ===" << std::endl;
    std::cout << "(Watch the destructor calls below)" << std::endl;

    return 0;
    // Destructors will be called here automatically in reverse order of construction
}