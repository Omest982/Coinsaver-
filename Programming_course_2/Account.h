#pragma once
#include <string>
#include <iostream>

using namespace std;

class Account {
private:
	string name; //Название
	int money;	 //Денег заработано|потрачено 
public:
	Account();		//Конструкторы
	Account(string);
	Account(string, int);
	~Account();		//Деструктор
	void setName(string);
	void setMoney(int);
	string getName();
	int getMoney();
};