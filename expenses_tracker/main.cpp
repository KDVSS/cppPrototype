#include <iostream>
#include "prototype_lib/expenses_tracker.h"
using namespace std;

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