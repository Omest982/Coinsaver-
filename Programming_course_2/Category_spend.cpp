#include "Category_spend.h"

Category_spend::Category_spend()
{
	budget = 0;
}

Category_spend::Category_spend(string newName): Category_earn(newName)
{
	budget = 0;
}

Category_spend::Category_spend(string newName, int newMoney): Category_earn(newName, newMoney)
{
	budget = 0;
}

Category_spend::Category_spend(string newName, int newMoney, int newBudget) : Category_earn(newName, newMoney)
{
	budget = newBudget;
}

Category_spend::~Category_spend()
{
}

void Category_spend::setBudget(int newBudget)
{
	budget = newBudget;
}

int Category_spend::getBudget()
{
	return budget;
}

void Category_spend::print()
{
	
	cout << "Category spend name : "<< getName() << endl << "Money spend : " << getMoney() << endl << "Budget : " << budget << endl;
}
