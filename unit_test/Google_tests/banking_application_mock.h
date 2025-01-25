#ifndef BANKING_APPLICATION_MOCK_H
#define BANKING_APPLICATION_MOCK_H

#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "../prototype_lib/banking_application.h"

class MockBankingApplication : public BankingApplication
{
    public:
        MOCK_METHOD(int, deposit_amount, (int amount, struct User* user), (override));
        MOCK_METHOD(int, withdraw_amount, (int amount, struct User* user), (override));
};



#endif //BANKING_APPLICATION_MOCK_H
