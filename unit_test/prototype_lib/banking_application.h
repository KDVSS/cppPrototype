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

class BankingApplication
{
public:
    virtual ~BankingApplication() = default;

    virtual int deposit_amount(int amount, struct User* user);
    virtual int withdraw_amount(int amount, struct User* user);
};

void init_bank(struct Bank* bank);
void user_data(struct User* user);
void bank_open(bool isUnitTest, int user_choice,
               int amount, const struct Bank* bank,
               struct User* user, BankingApplication* bankApp);

#endif // BANKING_APPLICATION_H
