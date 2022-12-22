#pragma once
#include "Category_earn.h"

class Category_spend :public Category_earn {		//Наследует класс Categore_earn
private:
	int budget;		//Выделеный бюджет
public:
	Category_spend();		//Конструкторы
	Category_spend(string _name);
	Category_spend(string _name, int _money);
	Category_spend(string _name, int _money, int _budget);		//Наследует переменные
	~Category_spend();		//Деструктор
	void setBudget(int newBudget);
	int getBudget();
	void print();
};