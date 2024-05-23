#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "Trust_Account.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{ "Larry" });
    accounts.push_back(Account{ "Moe", 2000 });
    accounts.push_back(Account{ "Curly", 5000 });

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account{});
    sav_accounts.push_back(Savings_Account{ "Superman" });
    sav_accounts.push_back(Savings_Account{ "Batman", 2000 });
    sav_accounts.push_back(Savings_Account{ "Wonderwoman", 5000, 5.0 });

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking

    vector<Checking_Account> chek_accounts;
    chek_accounts.push_back(Checking_Account{});
    chek_accounts.push_back(Checking_Account{ "Anton" });
    chek_accounts.push_back(Checking_Account{"JoJo", 3000});
    chek_accounts.push_back(Checking_Account{"Dio", 10000, 2});

    display(chek_accounts);
    deposit(chek_accounts, 1000);
    withdraw(chek_accounts, 2000);

    //Trust
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Arno"});
    trust_accounts.push_back(Trust_Account{"Stiven", 4000});
    trust_accounts.push_back(Trust_Account{"Violet", 6500,4});
    trust_accounts.push_back(Trust_Account{"Niki", 10000,2,60});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 2000);

    

	return 0;
}