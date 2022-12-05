#pragma once
class Stats {
private:
	int Profit;			//Денег заработано
	int Expenses;		//Денег потрачено
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