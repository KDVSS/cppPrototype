#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "banking_application.h"
#include "banking_application_mock.h"

using ::testing::_;
using ::testing::Return;

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

TEST(BankingApplication, verifyBankOpenUsingMock)
{
    struct Bank bank;
    init_bank(&bank);
    struct User user;
    user_data(&user);

    MockBankingApplication mockBankingApplication;
    EXPECT_CALL(mockBankingApplication, deposit_amount(500, _))
                .Times(1)
                .WillOnce(Return(0)); // Since the return value isn't involved in any logic, verifying it has no impact on the test result.
    EXPECT_CALL(mockBankingApplication, withdraw_amount(_, _))
                .Times(0);

    // Test Step 1: Verifying deposit Method
    bank_open(true, 3, 500, &bank, &user, &mockBankingApplication);

    // Test Step 2: Verifying Withdrawal Method
    bank_open(true, 4, 200, &bank, &user, &mockBankingApplication);
}

TEST(BankingApplication, verifyBankOpen)
{
    struct Bank bank;
    init_bank(&bank);
    struct User user;
    user_data(&user);

    BankingApplication bankApp;

    // Test Step 1: Verifying deposit
    bank_open(true, 3, 500, &bank, &user, &bankApp);
    EXPECT_EQ(user.balance, 500);

    // Test Step 2: Verifying Withdrawal
    bank_open(true, 4, 200, &bank, &user, &bankApp);
    EXPECT_EQ(user.balance, 300);
}