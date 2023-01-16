#pragma once
#include "Category_earn.h"

class Category_spend :public Category_earn {		//Наследует класс Categore_earn
private:
	int budget;		//Выделеный бюджет
public:
	Category_spend();		//Конструкторы
	Category_spend(string _name);
	Category_spend(const Category_spend& _spend);
	//Category_spend(string _name, int _money);
	Category_spend(string _name, int _budget);		
	~Category_spend();		//Деструктор
	void setBudget(int newBudget);
	int getBudget() const;
	void print();
	bool operator > (Category_spend _spend);
	bool operator < (Category_spend _spend);
	Category_spend operator + (Category_spend _spend);
	bool operator == (Category_spend _spend);
	bool operator != (Category_spend _spend);
	Category_spend operator = (Category_spend _spend);
};