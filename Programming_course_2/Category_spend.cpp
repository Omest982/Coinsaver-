#include "Category_spend.h"

Category_spend::Category_spend()
{
	budget = 0;
}

Category_spend::Category_spend(string _name): Category_earn(_name)
{
	budget = 0;
}

Category_spend::Category_spend(const Category_spend& _spend): Category_earn(_spend.getName(), _spend.getMoney())
{
	budget = _spend.getBudget();
}

/*Category_spend::Category_spend(string _name, int _money) : Category_earn(_name, _money)
{
	budget = 0;
}*/

Category_spend::Category_spend(string _name, int _budget) : Category_earn(_name)
{
	budget = _budget;
}

Category_spend::~Category_spend()
{
}

void Category_spend::setBudget(int newBudget)
{
	budget = newBudget;
}

int Category_spend::getBudget() const
{
	return budget;
}

void Category_spend::print()
{
	
	cout << "Category spend name : "<< getName() << endl << "Money spend : " << getMoney() << endl << "Budget : " << budget << endl;
}

int Category_spend::virtFunc()
{
	cout << "Category_spend func" << endl;
	return 0;
}

bool Category_spend::operator>(const Category_spend& _spend)
{
	return this->getMoney() > _spend.getMoney();
}

bool Category_spend::operator<(const Category_spend& _spend)
{
	return this->getMoney() < _spend.getMoney();
}

/*Category_spend Category_spend::operator+(const Category_spend& _spend)
{
	this->plusMoney(_spend.getMoney());
	return *this;
}*/

bool Category_spend::operator==(const Category_spend& _spend)
{
	return this->getMoney() == _spend.getMoney();
}

bool Category_spend::operator!=(const Category_spend& _spend)
{
	return this->getMoney() != _spend.getMoney();
}

Category_spend Category_spend::operator=(const Category_spend& _spend)
{
	this->setMoney(_spend.getMoney());
	this->setName(_spend.getName());
	this->setBudget(_spend.getBudget());
	return *this;
}

ostream& operator<<(ostream& out, const Category_spend& _spend)
{
	out << "Category spend name is: " << _spend.getName() << endl;
	out << "Money spend: " << _spend.getMoney() << endl;
	return out;
}

istream& operator>>(istream& in, Category_spend& _spend)
{
	int budget;
	string name;
	cout << "Enter name for Category spend: " << endl;
	in >> name;
	_spend.setName(name);
	cout << "Enter budget for " << _spend.getName() << ":" << endl;
	in >> budget;
	_spend.setBudget(budget);
	return in;
}
