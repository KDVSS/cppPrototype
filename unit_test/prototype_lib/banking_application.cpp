#include <iostream>
#include "banking_application.h"

using namespace std;

void init_bank(struct Bank* bank)
{
    bank->balance    = 1;
    bank->account    = 2;
    bank->deposit    = 3;
    bank->withdrawal = 4;
}

void user_data(struct User* user)
{
    user->account_number = "123456789";
    user->name           = "IAMGENIUS";
    user->balance        = 0;
    user->withdrawal     = 0;
    user->deposit        = 0;
}

int BankingApplication::deposit_amount(int amount, struct User* user)
{
    user->balance += amount;
    cout << "Updated Balance: " << user->balance << endl;
    return user->balance;
}

int BankingApplication::withdraw_amount(int amount, struct User* user)
{
    user->balance -= amount;
    cout << "Updated Balance: " << user->balance << endl;
    return user->balance;
}

void bank_open(bool isUnitTest, int user_choice,
               int amount, const struct Bank* bank,
               struct User* user, BankingApplication* bankApp)
{
    bool bank_irr = true;

    while (bank_irr) {
        bank_irr = !isUnitTest;
        if (!isUnitTest) {
            cout << "\n1. Balance  2. Account" << endl
                    << "3. Deposit   4. Withdrawal" << endl
                    << "5. Exit" << endl
                    << "Select the option: ";
            cin >> user_choice;
        }

        if (user_choice == bank->balance) {
            cout << "Your current balance is: " << user->balance << endl;
        } else if (user_choice == bank->deposit) {
            if (!isUnitTest) {
                cout << "Enter deposit amount: ";
                cin >> amount;
            }
            bankApp->deposit_amount(amount, user);
        } else if (user_choice == bank->account) {
            cout << "Current Account Number: " << user->account_number << endl;
        }else if (user_choice == bank->withdrawal) {
            if (!isUnitTest) {
                cout << "Enter withdrawal amount: ";
                cin >> amount;
            }
            if (user->balance <= 0) {
                cout << "Your current balance is: " << user->balance << endl;
            } else if (amount <= user->balance) {
                bankApp->withdraw_amount(amount, user);
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else if (user_choice == 5) {
            cout << "Exiting the application." << endl;
            break;
        } else {
            cout << "Invalid user_choice! Please try again." << endl;
        }
    }
}