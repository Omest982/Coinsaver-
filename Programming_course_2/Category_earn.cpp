#include "Category_earn.h"

Category_earn::Category_earn(): Account()
{
}

Category_earn::Category_earn(string _name): Account(_name)
{
}

Category_earn::Category_earn(string _name, int _money): Account(_name, _money)
{
}

Category_earn::~Category_earn()
{
}

void Category_earn::print()
{
	cout << "Category name : " << getName() << endl << "Money : " << getMoney() << endl;
}
