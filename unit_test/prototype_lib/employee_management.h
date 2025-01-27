#ifndef EMPLOYEE_MANAGEMENT_H
#define EMPLOYEE_MANAGEMENT_H

struct Address {
    char street[50];
    char city[50];
    char state[50];
    char zip[10];
};

struct Employee {
    int id;
    char name[50];
    int age;
    double salary;
    Address* address;
};

void createEmployee(int id, const char* name, int age, double salary,
                         const char* street, const char* city, const char* state, const char* zip, Employee** employee);

void displayEmployeeInfo(Employee** employee);

#endif // EMPLOYEE_MANAGEMENT_H
