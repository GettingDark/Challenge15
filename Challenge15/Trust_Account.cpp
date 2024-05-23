#include "Trust_Account.h"

std::ostream& operator<<(std::ostream& os, const Trust_Account& account)
{
    os << "[Trust_Account: " << account.name << ": Balance: $" << account.balance << ", Bonus $" << account.get_bonus() << ", Interested rate: %" << account.int_rate << "]";
    return os;
}

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double bonus) :
    Savings_Account{ name, balance, int_rate }, bonus{ bonus }
{
}

