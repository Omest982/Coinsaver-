#include <iostream>
#include "Wallet.h"

using namespace std;

Wallet::Wallet(): Account()
{
}

Wallet::Wallet(string _name, int _money): Account(_name, _money)
{
	
}

Wallet::~Wallet()
{
}

void Wallet::print()
{
	cout << "Wallet name is : " << getName() << endl << "Balance is : " << getMoney() << endl;
}
