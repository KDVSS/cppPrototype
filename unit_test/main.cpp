#include <iostream>
//#include "banking_application.h"
#include <employee_management.h>

using namespace std;

//struct Bank bank;
//struct User user;
struct Employee employee;

int main()
{
    //init_bank(&bank);
    //user_data(&user);
    //BankingApplication bankApp;
    //bank_open(false, 0, 0, &bank, &user, &bankApp);

    Employee* employee = nullptr;
     createEmployee(2025, "XYZ", 30, 50000,
                                            "123 ABC street", "Stockholm", "ST", "19267", &employee);
    displayEmployeeInfo(&employee);

    return 0;
}
