#include <iostream>
#include "Wallet.h"

using namespace std;

Wallet::Wallet(): Account()
{
}

Wallet::Wallet(string newName, int newMoney): Account(newName, newMoney)
{
	
}

Wallet::~Wallet()
{
}

void Wallet::print()
{
	cout << "Wallet name is : " << getName() << endl << "Balance is : " << getMoney() << endl;
}
