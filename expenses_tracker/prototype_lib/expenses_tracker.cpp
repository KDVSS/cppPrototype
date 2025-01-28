#include <iostream>
#include <vector>
#include <string>
#include "expenses_tracker.h"

using namespace std;

void displayExpenses(std::vector<Expense>& expenses)
{
    Expense newExpense;
    newExpense.id = 1;
    newExpense.description = "Lunch at Ericsson";
    newExpense.category = "Food";
    newExpense.date = "2021";
    newExpense.amount = 110;
    expenses.push_back(newExpense);

    Expense newExpense1;
    newExpense1.id = 2;
    newExpense1.description = "Fika at Volvo";
    newExpense1.category = "Tea + Snacks";
    newExpense1.date = "2022";
    newExpense1.amount = 30;
    expenses.push_back(newExpense1);
}