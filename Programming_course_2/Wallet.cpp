#include <iostream>
#include "Wallet.h"

using namespace std;

Wallet::Wallet(): Account()
{
}

Wallet::Wallet(const Wallet& _wallet): Account(_wallet.getName(), _wallet.getMoney())
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

int Wallet::virtFunc()
{
	cout << "Wallet func" << endl;;
	return 0;
}

Wallet& Wallet::operator++ ()
{
	this->plusMoney(1);
	return *this;
}

Wallet Wallet::operator++(int)
{
	Wallet prev = *this;
	++* this;
	return prev;
}

Wallet& Wallet::operator--()
{
	this->minusMoney(1);
	return *this;
}

Wallet Wallet::operator--(int)
{
	Wallet prev = *this;
	--* this;
	return prev;
}

Wallet Wallet::operator+(const Wallet& fromWallet)
{
	this->plusMoney(fromWallet.getMoney());
	return *this;
}

bool Wallet::operator>(const Wallet& _wallet)
{
	return this->getMoney() > _wallet.getMoney();
}

bool Wallet::operator<(const Wallet& _wallet)
{
	return this->getMoney() < _wallet.getMoney();
}

Wallet Wallet::operator=(const Wallet& _wallet)
{
	this->setMoney(_wallet.getMoney());
	this->setName(_wallet.getName());
	return *this;
}

bool Wallet::operator==(const Wallet& _wallet)
{
	return this->getMoney() == _wallet.getMoney();
}

bool Wallet::operator!=(const Wallet& _wallet)
{
	return this->getMoney() != _wallet.getMoney();
}

ostream& operator<<(ostream& out, const Wallet& _wallet)
{
	out << "Wallet name is: " << _wallet.getName() << endl;
	out	<< "Balance is: " << _wallet.getMoney() << endl;
	return out;
}

istream& operator>>(istream& in, Wallet& _wallet)
{
	int money;
	string name;
	cout << "Enter name for wallet: " << endl;
	in >> name;
	_wallet.setName(name);
	cout << "Enter money for " << _wallet.getName() << ":" << endl;
	in >> money;
	_wallet.setMoney(money);
	return in;
}
