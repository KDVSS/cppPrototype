#include <gtest/gtest.h>
#include "banking_application.h"

TEST(BankingApplication, initBankAndUserData) {
    struct Bank bank;
    init_bank(&bank);

    EXPECT_EQ(bank.balance, 1);
    EXPECT_EQ(bank.account, 2);
    EXPECT_EQ(bank.deposit, 3);
    EXPECT_EQ(bank.withdrawal, 4);

    struct User user;
    user_data(&user);

    EXPECT_EQ(user.name, "IAMGENIUS");
    EXPECT_EQ(user.account_number, "123456789");
    EXPECT_EQ(user.balance, 0);
    EXPECT_EQ(user.withdrawal, 0);
    EXPECT_EQ(user.deposit, 0);
}

TEST(BankingApplication, verifyBankOpen)
{
    struct Bank bank;
    init_bank(&bank);
    struct User user;
    user_data(&user);

    // Test Step 1: Verifying deposit
    bank_open(true, 3, 500, &bank, &user);
    EXPECT_EQ(user.balance, 500);

    // Test Step 2: Verifying Withdrawal
    bank_open(true, 4, 200, &bank, &user);
    EXPECT_EQ(user.balance, 300);
}