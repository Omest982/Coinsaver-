#include "Stats.h"

Stats::Stats()
{
	profit = 0;
	expenses = 0;
}

Stats::Stats(int _profit, int _expenses)
{
	profit = _profit;
	expenses = _expenses;
}

Stats::~Stats()
{
}

void Stats::setProfit(int newProfit)
{
	profit = newProfit;
}

void Stats::setExpenses(int newExpenses)
{
	expenses = newExpenses;
}

int Stats::getProfit()
{
	return profit;
}

int Stats::getExpenses()
{
	return expenses;
}

void Stats::addProfit(int amount)
{
	profit += amount;
}

void Stats::addExpenses(int amount)
{
	expenses += amount;
}

void Stats::print()
{
	cout << "Profit : " << profit << endl;
	cout << "Expenses : " << expenses << endl;
}
