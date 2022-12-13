#include "Category_spend.h"

Category_spend::Category_spend()
{
	budget = 0;
}

Category_spend::Category_spend(string newName)
{
	setName(newName);
	budget = 0;
}

Category_spend::Category_spend(string newName, int newMoney)
{
	setName(newName);
	setMoney(newMoney);
	budget = 0;
}

Category_spend::Category_spend(string newName, int newMoney, int newBudget)
{
	setName(newName);
	setMoney(newMoney);
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
