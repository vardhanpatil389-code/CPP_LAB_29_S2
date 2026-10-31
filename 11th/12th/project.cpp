#include <iostream>
#include <string>
using namespace std;

// =================================================
// 1. CLASS AND OBJECT
// =================================================

class Employee {

    // =================================================
    // 2. ENCAPSULATION
    // =================================================

private:
    // Private data members: cannot be accessed directly
    int id;
    string name;
    double basicSalary;

public:

    // =================================================
    // 6. CONSTRUCTOR OVERLOADING
    // =================================================

    // Default constructor
    Employee() {
        id = 0;
        name = "Unknown";
        basicSalary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, double salary) {
        id = i;
        name = n;
        basicSalary = salary;
    }

    // Getter functions provide controlled access
    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    double getSalary() const {
        return basicSalary;
    }

    // Display employee details
    void displayDetails() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }

    // =================================================
    // 5. ABSTRACTION
    // =================================================

    // Pure virtual function.
    // Employee becomes an abstract class.
    // Derived classes must provide its implementation.

    virtual double calculateSalary() const = 0;
};


// =================================================
// 3. INHERITANCE
// =================================================

// FullTimeEmployee inherits Employee class.

class FullTimeEmployee : public Employee {

public:

    // Default constructor
    FullTimeEmployee() : Employee() {
    }

    // Parameterized constructor
    FullTimeEmployee(int i, string n, double salary)
        : Employee(i, n, salary) {
    }

    // =================================================
    // 4. POLYMORPHISM
    // FUNCTION OVERLOADING
    // =================================================

    // Calculates salary without bonus
    double calculateSalary(double basic) const {
        return basic;
    }

    // Same function name with two parameters
    // Calculates salary with bonus
    double calculateSalary(double basic, double bonus) const {
        return basic + bonus;
    }

    // =================================================
    // RUNTIME POLYMORPHISM - FUNCTION OVERRIDING
    // =================================================

    // Implements the pure virtual function
    // declared in the Employee class.

    double calculateSalary() const override {
        return calculateSalary(getSalary(), 5000);
    }

    // Displays complete payroll information
    void displaySalary() const {

        displayDetails();

        cout << "Salary without bonus: "
             << calculateSalary(getSalary()) << endl;

        cout << "Salary with bonus: "
             << calculateSalary(getSalary(), 5000) << endl;

        cout << "Final Salary: "
             << calculateSalary() << endl;
    }
};


// =================================================
// MAIN FUNCTION
// =================================================

int main() {

    // Creating an object of FullTimeEmployee
    FullTimeEmployee e1(101, "Aryan", 30000);

    cout << "EMPLOYEE PAYROLL SYSTEM" << endl;
    cout << "------------------------" << endl;

    e1.displaySalary();

    // Runtime polymorphism using a base class pointer
    Employee* ptr = &e1;

    cout << "\nSalary using base class pointer: "
         << ptr->calculateSalary() << endl;

    return 0;
}