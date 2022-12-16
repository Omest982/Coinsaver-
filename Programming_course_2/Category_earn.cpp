#include "Category_earn.h"

Category_earn::Category_earn(): Account()
{
}

Category_earn::Category_earn(string newName): Account(newName)
{
}

Category_earn::Category_earn(string newName, int newMoney): Account(newName, newMoney)
{
}

Category_earn::~Category_earn()
{
}

void Category_earn::print()
{
	cout << "Category name : " << getName() << endl << "Money : " << getMoney() << endl;
}
