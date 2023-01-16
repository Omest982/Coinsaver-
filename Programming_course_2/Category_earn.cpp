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

Category_earn Category_earn::operator-(Category_earn _earn)
{
	this->minusMoney(_earn.getMoney());
	return *this;
}

bool Category_earn::operator>(Category_earn _earn)
{
	return this->getMoney() > _earn.getMoney();
}

bool Category_earn::operator<(Category_earn _earn)
{
	return this->getMoney() < _earn.getMoney();
}

bool Category_earn::operator==(Category_earn _earn)
{
	return this->getMoney() == _earn.getMoney();
}

bool Category_earn::operator!=(Category_earn _earn)
{
	return this->getMoney() != _earn.getMoney();
}

Category_earn Category_earn::operator=(Category_earn _earn)
{
	this->setMoney(_earn.getMoney());
	this->setName(_earn.getName());
	return *this;
}
