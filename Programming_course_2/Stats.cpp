#include "Stats.h"

Stats::Stats()
{
	profit = 0;
	expenses = 0;
}

Stats::Stats(int newProfit, int newExpenses)
{
	profit = newProfit;
	expenses = newExpenses;
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

void Stats::print()
{
	cout << "Profit : " << profit << endl;
	cout << "Expenses : " << expenses << endl;
}
