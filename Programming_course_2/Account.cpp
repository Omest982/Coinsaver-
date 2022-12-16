#include "Account.h"

Account::Account()
{
	name = "noName";
	money = 0;
}

Account::Account(string newName)
{
	name = newName;
	money = 0;
}

Account::Account(string newName, int newMoney)
{
	name = newName;
	money = newMoney;
}

Account::~Account()
{
}

void Account::setName(string newName)
{
	name = newName;
}

void Account::setMoney(int newMoney)
{
	money = newMoney;
}

string Account::getName()
{
	return name;
}

int Account::getMoney()
{
	return money;
}
