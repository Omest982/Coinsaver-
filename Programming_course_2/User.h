#pragma once
#include "Category_earn.h"
#include "Category_spend.h"
#include "Wallet.h"
#include "Stats.h"
#include <string>
#include <vector>

using namespace std;

class User {
private:
	string name;						//Имя
	vector<Wallet> wallets;				//Кошельки
	vector<Category_earn> earn;			//Категории заработка
	vector<Category_spend> spend;		//Категории трат
	Stats stat;							//Статистика 
public:
	User();
	User(string _name, vector<Wallet> _wallets, vector<Category_earn> _earn, vector<Category_spend> _spend);
	User(string _name);
	~User();
	void setName(string newName);
	void setWallets(vector<Wallet> newWallets);
	void addWallets(Wallet newWallet);
	void setEarn(vector<Category_earn> newEarns);
	void addEarn(Category_earn newEarn);
	void setSpend(vector<Category_spend> newSpends);
	void addSpend(Category_spend newSpend);
	void setStat(int newProfit, int newExpenses);
	string getName();
	vector<Wallet> getWallets();
	vector<Category_earn> getEarn();
	vector<Category_spend> getSpend();
	Stats getStat();
	void spendOperation(string walletName, string categoryName, int amount); 
	void earnOperation(string walletName, string categoryName, int amount);
	void walletOperation(string fromWalletName, string toWalletName, int amount);
	
	void print();
};