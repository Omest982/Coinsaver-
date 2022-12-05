#include <iostream>
#include "Wallet.h"

using namespace std;

Wallet::Wallet()
{
	name = "noName";
	money = 0;
}

Wallet::Wallet(string newName, int newMoney)
{
	name = newName;
	money = newMoney;
}

Wallet::~Wallet()
{
}

void Wallet::setName(string newName)
{
	name = newName;
}

void Wallet::setMoney(int newMoney)
{
	money = newMoney;
}

string Wallet::getName()
{
	return name;
}

int Wallet::getMoney()
{
	return money;
}

void Wallet::print()
{
	cout << "Wallet name is : " << name << endl << "Balance is : " << money << endl;
}
