#include "Category_spend.h"

Category_spend::Category_spend()
{
	budget = 0;
}

Category_spend::Category_spend(string _name): Category_earn(_name)
{
	budget = 0;
}

Category_spend::Category_spend(const Category_spend& _spend): Category_earn(_spend.getName())
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
