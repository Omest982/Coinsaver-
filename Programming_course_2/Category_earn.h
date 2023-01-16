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
	Category_earn operator- (Category_earn _earn);
	bool operator > (Category_earn _earn);
	bool operator < (Category_earn _earn);
	bool operator == (Category_earn _earn);
	bool operator != (Category_earn _earn);
	Category_earn operator = (Category_earn _earn);
};