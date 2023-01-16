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

Account::Account(const Account& _account)
{
	name = _account.getName();
	money = _account.getMoney();
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

void Account::plusMoney(int amount)
{
	money += amount;
}

void Account::minusMoney(int amount)
{
	money -= amount;
}

string Account::getName() const
{
	return name;
}

int Account::getMoney() const
{
	return money;
}

bool Account::operator>(Account _account)
{
	return this->getMoney() > _account.getMoney();
}

bool Account::operator<(Account _account)
{
	return this->getMoney() < _account.getMoney();
}

Account Account::operator+(Account _account)
{
	this->plusMoney(_account.getMoney());
	return *this;
}

bool Account::operator==(Account _account)
{
	return this->getMoney() == _account.getMoney();
}

bool Account::operator!=(Account _account)
{
	return this->getMoney() != _account.getMoney();
}

Account Account::operator=(Account _account)
{
	this->setMoney(_account.getMoney());
	this->setName(_account.getName());
	return *this;
}
