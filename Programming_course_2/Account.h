#pragma once
#include <string>
#include <iostream>

using namespace std;

class Account {
private:
	string name; 
	int money;	 
public:
	Account();		//Constructors
	Account(string _name);
	Account(string _name, int _money);
	~Account();		//Destructor
	void setName(string newName);
	void setMoney(int newMoney);
	void plusMoney(int amount);
	void minusMoney(int amount);
	string getName();
	int getMoney();
};