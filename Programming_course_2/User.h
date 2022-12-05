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
	User(string, vector<Wallet>, vector<Category_earn>, vector<Category_spend>);
	~User();
	void setName(string);
	void setWallets(vector<Wallet>);
	void setEarn(vector<Category_earn>);
	void setSpend(vector<Category_spend>);
	string getName();
	vector<Wallet> getWallets();
	vector<Category_earn> getEarn();
	vector<Category_spend> getSpend();
	void print();
};