#include "Category_earn.h"

Category_earn::Category_earn(): Account()
{
}

Category_earn::Category_earn(string _name): Account(_name)
{
}

Category_earn::Category_earn(const Category_earn& _earn): Account(_earn.getName(), _earn.getMoney())
{
}

Category_earn::Category_earn(string _name, int _money) : Account(_name, _money)
{
}

Category_earn::~Category_earn()
{
}

void Category_earn::print()
{
	cout << "Category name : " << getName() << endl << "Money : " << getMoney() << endl;
}

int Category_earn::virtFunc()
{
	cout << "Categoty_earn func" << endl;
	return 0;
}

Category_earn Category_earn::operator-(const Category_earn& _earn)
{
	this->minusMoney(_earn.getMoney());
	return *this;
}

bool Category_earn::operator>(const Category_earn& _earn)
{
	return this->getMoney() > _earn.getMoney();
}

bool Category_earn::operator<(const Category_earn& _earn)
{
	return this->getMoney() < _earn.getMoney();
}

bool Category_earn::operator==(const Category_earn& _earn)
{
	return this->getMoney() == _earn.getMoney();
}

bool Category_earn::operator!=(const Category_earn& _earn)
{
	return this->getMoney() != _earn.getMoney();
}

Category_earn Category_earn::operator=(const Category_earn& _earn)
{
	this->setMoney(_earn.getMoney());
	this->setName(_earn.getName());
	return *this;
}

ostream& operator<<(ostream& out, const Category_earn& _earn)
{
	out << "Category earn name is: " << _earn.getName() << endl;
	out << "Money earned: " << _earn.getMoney() << endl;
	return out;
}

istream& operator>>(istream& in, Category_earn& _earn)
{
	int money;
	string name;
	cout << "Enter name for Category earn: " << endl;
	in >> name;
	_earn.setName(name);
	cout << "Enter money earned for " << _earn.getName() << ":" << endl;
	in >> money;
	_earn.setMoney(money);
	return in;
}
