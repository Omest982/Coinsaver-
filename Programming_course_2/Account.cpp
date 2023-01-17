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

int Account::virtFunc()
{
	cout << "Account func" << endl;
	return 0;
}

bool Account::operator>(const Account& _account)
{
	return this->getMoney() > _account.getMoney();
}

bool Account::operator<(const Account& _account)
{
	return this->getMoney() < _account.getMoney();
}

Account Account::operator+(const Account& _account)
{
	this->plusMoney(_account.getMoney());
	return *this;
}

bool Account::operator==(const Account& _account)
{
	return this->getMoney() == _account.getMoney();
}

bool Account::operator!=(const Account& _account)
{
	return this->getMoney() != _account.getMoney();
}

Account Account::operator=(const Account& _account)
{
	this->setMoney(_account.getMoney());
	this->setName(_account.getName());
	return *this;
}

Account::operator int()
{
	return money;
}

Account::operator string()
{
	return name;
}

ostream& operator<<(ostream& out, const Account& _account)
{
	out << "Account: " << _account.getName() << endl;
	out << "Money: " << _account.getMoney() << endl;
	return out;
}

istream& operator>>(istream& in, Account& _account)
{
	cout << "Enter name for Account" << endl;
	in >> _account.name;
	cout << "Enter money for " << _account.name << ":" << endl;
	in >> _account.money;
	return in;
}
