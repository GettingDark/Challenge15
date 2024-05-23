#pragma once 

#include <iostream>.
#include "Account.h"
#include "Savings_Account.h"
#include <string>

class Trust_Account : public Savings_Account
{
	friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_inter_rate = 0.0;
	static constexpr double def_bonus = 50.0;
protected:
	double bonus;
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_inter_rate, double bonus = def_bonus);

	void set_bonus(double s_bonus) { bonus = s_bonus; }
	double get_bonus() const { return bonus; }	
};