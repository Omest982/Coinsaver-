#pragma once
#include "Category_earn.h"
#include "Category_spend.h"
#include "Wallet.h"
#include <string>
#include <vector>

using namespace std;

class User {
private:
	string name;						//Имя
	vector<Wallet> wallets;				//Кошельки
	vector<Category_earn> earn;			//Категории заработка
	vector<Category_spend> spend;		//Категории трат	
public:
	User();
	~User();
	void setName(string);
	string getName();
	Wallet getWallets();
	void print();
};