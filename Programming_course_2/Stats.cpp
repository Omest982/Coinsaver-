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

Stats::Stats(const Stats& _stats)
{
	profit = _stats.getProfit();
	expenses = _stats.getExpenses();
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

int Stats::getProfit() const
{
	return profit;
}

int Stats::getExpenses() const
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

ostream& operator<<(ostream& out, const Stats& _stats)
{
	out << "Profit is: " << _stats.getProfit() << endl;
	out << "Expenses are: " << _stats.getExpenses() << endl;
	return out;
}

istream& operator>>(istream& in, Stats& _stats)
{
	int profit;
	int expenses;
	cout << "Enter profit: " << endl;
	in >> profit;
	_stats.setProfit(profit);
	cout << "Enter expenses: " << endl;
	in >> expenses;
	_stats.setExpenses(expenses);
	return in;
}
