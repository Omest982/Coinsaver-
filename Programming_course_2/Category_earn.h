#pragma once
#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

class Category_earn: public Account {
private:
	
public:
	Category_earn();		//Конструкторы
	Category_earn(string _name);
	Category_earn(const Category_earn& _earn);
	Category_earn(string _name, int _money);
	~Category_earn();		//Деструктор
	void print();
	virtual void virtFunc();
	Category_earn operator - (const Category_earn& _earn);
	bool operator > (const Category_earn& _earn);
	bool operator < (const Category_earn& _earn);
	bool operator == (const Category_earn& _earn);
	bool operator != (const Category_earn& _earn);
	Category_earn operator = (const Category_earn& _earn);
	friend ostream& operator << (ostream& out, const Category_earn& _earn);
	friend istream& operator >> (istream& in, Category_earn& _earn);
};