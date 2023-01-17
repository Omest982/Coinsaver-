#pragma once
#include <string>
#include "Account.h"

using namespace std;

class Wallet: public Account {
private:
	
public:
	Wallet();				//Конструкторы
	Wallet(const Wallet& _wallet);
	Wallet(string _name, int _money);
	~Wallet();				//Деструктор
	void print();
	virtual int virtFunc();
	Wallet& operator ++ ();
	Wallet operator ++ (int);
	Wallet& operator -- ();
	Wallet operator -- (int);
	Wallet operator + (const Wallet& _wallet);
	bool operator > (const Wallet& _wallet);
	bool operator < (const Wallet& _wallet);
	Wallet operator = (const Wallet& _wallet);
	bool operator == (const Wallet& _wallet);
	bool operator != (const Wallet& _wallet);
	friend ostream& operator << (ostream& out, const Wallet& _wallet);
	friend istream& operator >> (istream& in, Wallet& _wallet);
};