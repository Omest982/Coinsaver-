#include "User.h"

User::User()
{
	name = "noName";
	wallets = {};
	earn = {};
	spend = {};
}

User::User(string newName) {
	name = newName;
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

void User::addWallets(Wallet newWallet)
{
	wallets.push_back(newWallet);
}

void User::setEarn(vector<Category_earn> newEarn)
{
	earn = newEarn;
}

void User::addEarn(Category_earn newEarn)
{
	earn.push_back(newEarn);
}

void User::setSpend(vector<Category_spend> newSpend)
{
	spend = newSpend;
}

void User::addSpend(Category_spend newSpend)
{
	spend.push_back(newSpend);
}

void User::setStat(int newProfit, int newExpenses)
{
	stat.setProfit(newProfit);
	stat.setExpenses(newExpenses);
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

Stats User::getStat()
{
	return stat;
}

void User::spendOperation()
{

}

void User::earnOperation()
{

}

void User::walletOperation(string firstName, string secondName, int amount)
{
	Wallet firstWallet;
	Wallet secondWallet;
	int firstIndex;
	int secondIndex;
	for (int i = 0; i < wallets.size(); i++) {
		if (firstName == wallets[i].getName()) {
			firstWallet = wallets[i];
			firstIndex = i;
		}
		else if (secondName == wallets[i].getName()) {
			secondWallet = wallets[i];
			secondIndex = i;
		}
	}
	firstWallet.setMoney(firstWallet.getMoney() - amount);
	secondWallet.setMoney(secondWallet.getMoney() + amount);

	wallets[firstIndex] = firstWallet;
	wallets[secondIndex] = secondWallet;
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
