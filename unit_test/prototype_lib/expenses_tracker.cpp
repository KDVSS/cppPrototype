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
/*
std::vector<Expense> expenses;

int main()
{
    displayExpenses(expenses);
    std::cout << "Size of expenses in bytes): " << sizeof(expenses) + expenses.size() * sizeof(Expense) << std::endl;
    std::cout << "Length of expenses (num of elements): " << expenses.size() << std::endl;

    for (Expense& expense : expenses) {
        std::cout << "ID: " << expense.id << "\n";
        std::cout << "Description: " << expense.description << "\n";
        std::cout << "Category: " << expense.category << "\n";
        std::cout << "Date: " << expense.date << "\n";
        std::cout << "Amount: " << expense.amount << "\n\n";
    }

    cout << "Updated expenses data for 2nd element" << endl;
    for (int i = 1; i < expenses.size(); i++)
    {
        expenses.at(1).id = 3;
        expenses.at(1).description = "Hello World!";
        expenses.at(1).category = "C";
        expenses.at(1).date = "2024";
        expenses.at(1).amount = 500;
    }
    for (Expense& expense : expenses) {
        std::cout << "ID: " << expense.id << "\n";
        std::cout << "Description: " << expense.description << "\n";
        std::cout << "Category: " << expense.category << "\n";
        std::cout << "Date: " << expense.date << "\n";
        std::cout << "Amount: " << expense.amount << "\n\n";
    }
}
*/