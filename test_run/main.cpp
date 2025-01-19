#include <iostream>
#include "banking_application.h"

using namespace std;

struct Bank bank;
struct User user;

int main()
{
    init_bank(&bank);
    user_data(&user);
    bank_open(false, 0, 0, &bank, &user);

    return 0;
}
