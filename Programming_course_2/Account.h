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
	Account(int _money);
	Account(string _name, int _money);
	Account(const Account& _account);
	~Account();		//Destructor
	void setName(string newName);
	void setMoney(int newMoney);
	void plusMoney(int amount);
	void minusMoney(int amount);
	string getName() const;
	int getMoney() const;
	virtual void virtFunc();
	bool operator > (const Account& _account);
	bool operator < (const Account& _account);
	Account operator + (const Account& _account);
	bool operator == (const Account& _account);
	bool operator != (const Account& _account);
	Account operator = (const Account& _account);
	friend ostream& operator << (ostream& out, const Account& _account);
	friend istream& operator >> (istream& in, Account& _account);
	operator int();
	operator string();
};