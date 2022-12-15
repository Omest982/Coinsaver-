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
	User(string, vector<Wallet>, vector<Category_earn>, vector<Category_spend>);
	User(string);
	~User();
	void setName(string);
	void setWallets(vector<Wallet>);
	void addWallets(Wallet);
	void setEarn(vector<Category_earn>);
	void addEarn(Category_earn);
	void setSpend(vector<Category_spend>);
	void addSpend(Category_spend);
	void setStat(int, int);
	string getName();
	vector<Wallet> getWallets();
	vector<Category_earn> getEarn();
	vector<Category_spend> getSpend();
	Stats getStat();
	void spendOperation(string, string, int); //Нужно сделать
	/*
	С определенного кошелька снимаются деньги и добавляются в деньги 
	категории трат + в статистику добавляются в траты
	*/ 
	void earnOperation(string, string, int);  //Нужно сделать
	/*
	На определенный кошелек добавляются деньги и добавляются в деньги категории
	заработка + в статистику добаляются в заработок
	*/
	void walletOperation(string, string, int);  //DONE
	
	void print();
};