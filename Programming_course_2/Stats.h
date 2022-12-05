#pragma once
#include <iostream>

using namespace std;

class Stats {
private:
	int profit;			//Денег заработано
	int expenses;		//Денег потрачено
public:
	Stats();
	Stats(int, int);			//Конструкторы
	~Stats();
	void setProfit(int);
	void setExpenses(int);
	int getProfit();
	int getExpenses();
	void print();
};