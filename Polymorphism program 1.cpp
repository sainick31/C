#include <iostream>
#include <string>
class Person {
public:
    virtual void work() {
        std::cout << "Person is working\n";
    }
};
class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working\n";
    }
};
class Manager : public Person {
public:
    void work() override {
        std::cout << "Manager is working\n";
    }
};
int main() {
    Person person;
    Employee employee;
    Manager manager;
    person.work();   // Calls Person's work() function
    employee.work(); // Calls Employee's work() function
    manager.work();  // Calls Manager's work() function
    return 0;
}
