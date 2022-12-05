#pragma once
#include <string>
#include <iostream>

using namespace std;

class Category_earn {
private:
	string name; //Название
	int money;	 //Денег заработано|потрачено 
public:
	Category_earn();		//Конструкторы
	Category_earn(string, int);
	~Category_earn();		//Деструктор
	void setName(string);
	void setMoney(int);
	string getName();
	int getMoney();
	void print();
};