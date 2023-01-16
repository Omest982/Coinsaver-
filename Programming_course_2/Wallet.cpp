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

Wallet Wallet::operator+(Wallet fromWallet)
{
	this->plusMoney(fromWallet.getMoney());
	return *this;
}

bool Wallet::operator>(Wallet _wallet)
{
	return this->getMoney() > _wallet.getMoney();
}

bool Wallet::operator<(Wallet _wallet)
{
	return this->getMoney() < _wallet.getMoney();
}

Wallet Wallet::operator=(Wallet _wallet)
{
	this->setMoney(_wallet.getMoney());
	this->setName(_wallet.getName());
	return *this;
}

bool Wallet::operator==(Wallet _wallet)
{
	return this->getMoney() == _wallet.getMoney();
}

bool Wallet::operator!=(Wallet _wallet)
{
	return this->getMoney() != _wallet.getMoney();
}

