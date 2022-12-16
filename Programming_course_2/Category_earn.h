#pragma once
#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

class Category_earn: public Account {
private:
	
public:
	Category_earn();		//Конструкторы
	Category_earn(string);
	Category_earn(string, int);
	~Category_earn();		//Деструктор
	void print();
};