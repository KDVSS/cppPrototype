#ifndef BANKING_APPLICATION_H
#define BANKING_APPLICATION_H

#include <string>

using namespace std;

struct Bank
{
    int balance;
    int account;
    int deposit;
    int withdrawal;
};

struct User
{
    string name;
    string account_number;
    int balance;
    int withdrawal;
    int deposit;
};

extern struct Bank bank;
extern struct User user;

void init_bank(struct Bank* bank);
void user_data(struct User* user);
int bank_balance(int balance, struct User* user);
void bank_open(bool isUnitTest, int user_choice, int amount, const struct Bank* bank, struct User* user);

#endif // BANKING_APPLICATION_H
