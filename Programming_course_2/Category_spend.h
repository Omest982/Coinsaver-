#pragma once
#include "Category_earn.h"

class Category_spend :public Category_earn {		//Наследует класс Categore_earn
private:
	int budget;		//Выделеный бюджет
public:
	Category_spend();		//Конструкторы
	Category_spend(string);
	Category_spend(string, int);
	Category_spend(string, int, int);		//Наследует переменные
	~Category_spend();		//Деструктор
	void setBudget(int);
	int getBudget();
	void print();
};