#include <iostream>
#include <cstring>
#include <cstdlib>
#include "employee_management.h"

using namespace std;

// Create an Employee with dynamic memory allocation
void createEmployee(int id, const char* name, int age, double salary,
                         const char* street, const char* city, const char* state, const char* zip, Employee** employee) {
     *employee = (Employee*)malloc(sizeof(Employee));
    if (*employee == nullptr) {
        cout << "Employee memory creation failed" << endl;
        //return nullptr;
    }

    (*employee)->id = id;
    strcpy((*employee)->name, name);
    (*employee)->age = age;
    (*employee)->salary = salary;

    (*employee)->address = (Address*)malloc(sizeof(Address));
    if ((*employee)->address == nullptr) {
        cout << "Address memory creation failed" << endl;
        free(employee);  // Free memory for Employee
        //return nullptr;
    }

    strcpy((*employee)->address->street, street);
    strcpy((*employee)->address->city, city);
    strcpy((*employee)->address->state, state);
    strcpy((*employee)->address->zip, zip);

    //return employee;
}

void displayEmployeeInfo(Employee** employee) {
    if (*employee == nullptr) {
        cout << "Invalid employee!" << endl;
        return;
    }

    cout << "Employee ID: " << (*employee)->id << endl;
    cout << "Name: " << (*employee)->name << endl;
    cout << "Age: " << (*employee)->age << endl;
    cout << "Salary: $" << (*employee)->salary << endl;
    cout << "Address: " << (*employee)->address->street << ", "
         << (*employee)->address->city << ", " << (*employee)->address->state
         << " - " << (*employee)->address->zip << endl;
}
