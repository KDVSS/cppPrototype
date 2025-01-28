#ifndef EXPENSES_TRACKER_H
#define EXPENSES_TRACKER_H

#include <iostream>
#include <string>
#include <vector>

struct Expense
{
    int id;
    std::string description;
    std::string category;
    std::string date;
    double amount;
};

extern std::vector<Expense> expenses;
void displayExpenses(std::vector<Expense>& expenses);

#endif //EXPENSES_TRACKER_H
