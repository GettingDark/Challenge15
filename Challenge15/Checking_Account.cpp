#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee) :
	Account{name, balance}, fee{fee}
{
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& account)
{
	os << "[Checking_Account: " << account.name << ": " << account.balance << ", $" << account.fee << "]";
	return os;
}
