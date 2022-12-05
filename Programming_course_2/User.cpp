#include "User.h"

User::User()
{
	name = "noName";
	wallets = {};
	earn = {};
	spend = {};
}

User::User(string newName, vector<Wallet> newWallets, vector<Category_earn> newEarn, vector<Category_spend> newSpend)
{
	name = newName;
	wallets = newWallets;
	earn = newEarn;
	spend = newSpend;
}

User::~User()
{
}

void User::setName(string newName)
{
	name = newName;
}

void User::setWallets(vector<Wallet> newWallets)
{
	wallets = newWallets;
}

void User::setEarn(vector<Category_earn> newEarn)
{
	earn = newEarn;
}

void User::setSpend(vector<Category_spend> newSpend)
{
	spend = newSpend;
}

string User::getName()
{
	return name;
}

vector <Wallet> User::getWallets()
{
	return wallets;
}

vector<Category_earn> User::getEarn()
{
	return earn;
}

vector<Category_spend> User::getSpend()
{
	return spend;
}

void User::print()
{
	cout << "Name : " << name << endl;
	cout << "Wallets : ";
	for (int i = 0; i < wallets.size(); i++) {
		cout << wallets[i].getName() << " ";
	}
	cout << endl << "Earn categories : ";
	for (int i = 0; i < earn.size(); i++) {
		cout << earn[i].getName() << " ";
	}
	cout << endl << "Spend categories : ";
	for (int i = 0; i < spend.size(); i++) {
		cout << spend[i].getName() << " ";
	}
}
