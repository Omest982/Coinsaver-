#include "Category_earn.h"

Category_earn::Category_earn()
{
	name = "noName";
	money = 0;
}

Category_earn::Category_earn(string newName)
{
	name = newName;
	money = 0;
}

Category_earn::Category_earn(string newName, int newMoney)
{
	name = newName;
	money = newMoney;
}

Category_earn::~Category_earn()
{
}

void Category_earn::setName(string newName)
{
	name = newName;
}

void Category_earn::setMoney(int newMoney)
{
	money = newMoney;
}

string Category_earn::getName()
{
	return name;
}

int Category_earn::getMoney()
{
	return money;
}

void Category_earn::print()
{
	cout << "Category name : " << name << endl << "Money : " << money << endl;
}
