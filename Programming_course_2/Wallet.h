#pragma once
#include <string>

using namespace std;

class Wallet {
private:
	string name;		//Название
	int money;			//Количество денег на счету
public:
	Wallet();				//Конструкторы
	Wallet(string, int);
	~Wallet();				//Деструктор
	void setName(string);
	void setMoney(int);
	string getName();
	int getMoney();
	void print();
};