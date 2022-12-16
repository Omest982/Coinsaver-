#pragma once
#include <string>
#include "Account.h"

using namespace std;

class Wallet: public Account {
private:
	
public:
	Wallet();				//Конструкторы
	Wallet(string, int);
	~Wallet();				//Деструктор
	void print();
};