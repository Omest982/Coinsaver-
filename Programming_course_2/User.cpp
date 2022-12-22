#include "User.h"

User::User()
{
	name = "noName";
	wallets = {};
	earn = {};
	spend = {};
}

User::User(string _name) {
	name = _name;
	wallets = {};
	earn = {};
	spend = {};
}

User::User(string _name, vector<Wallet> _wallets, vector<Category_earn> _earn, vector<Category_spend> _spend)
{
	name = _name;
	wallets = _wallets;
	earn = _earn;
	spend = _spend;
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

void User::spendOperation(string walletName, string categoryName, int amount)
{
	Wallet _Wallet;
	Category_spend _Category_spend;
	int firstIndex, secondIndex;
	int find = 0;
	for (int i = 0; i < wallets.size(); i++) {
		if (walletName == wallets[i].getName()) {
			_Wallet = wallets[i];
			firstIndex = i;
			find++;
			break;
		}
	}

	for (int i = 0; i < spend.size(); i++){
		if (categoryName == spend[i].getName()) {
			_Category_spend = spend[i];
			secondIndex = i;
			find++;
			break;
		}
	}

	if (find == 2) {
		_Wallet.minusMoney(amount);
		_Category_spend.plusMoney(amount);

		if (_Category_spend.getBudget() > 0) {
			if (_Category_spend.getMoney() > _Category_spend.getBudget()) {
				cout << "Over budget!" << endl;
			}
		}

		wallets[firstIndex] = _Wallet;
		spend[secondIndex] = _Category_spend;

		stat.addExpenses(amount);
	}
	else {
		cout << "ERROR!" << endl;
	}
	
}

void User::earnOperation(string walletName, string categoryName, int amount)
{
	Wallet _Wallet;
	Category_earn _Category_earn;
	int firstIndex, secondIndex;
	int find = 0;
	for (int i = 0; i < wallets.size(); i++) {
		if (walletName == wallets[i].getName()) {
			_Wallet = wallets[i];
			firstIndex = i;
			find++;
			break;
		}
	}

	for (int i = 0; i < earn.size(); i++){
		if (categoryName == earn[i].getName()) {
			_Category_earn = earn[i];
			secondIndex = i;
			find++;
			break;
		}
	}

	if (find == 2) {
		_Wallet.plusMoney(amount);
		_Category_earn.plusMoney(amount);

		wallets[firstIndex] = _Wallet;
		earn[secondIndex] = _Category_earn;

		stat.addProfit(amount);
	}
	else {
		cout << "ERROR!" << endl;
	}
	
}

void User::walletOperation(string fromWalletName, string toWalletName, int amount)
{
	Wallet fromWallet, toWallet;
	int firstIndex, secondIndex;
	int find = 0;
	for (int i = 0; i < wallets.size(); i++) {
		if (fromWalletName == wallets[i].getName()) {
			fromWallet = wallets[i];
			firstIndex = i;
			find++;
		}
		else if (toWalletName == wallets[i].getName()) {
			toWallet = wallets[i];
			secondIndex = i;
			find++;
		}
	}
	if (find == 2) {
		fromWallet.minusMoney(amount);
		toWallet.plusMoney(amount);

		wallets[firstIndex] = fromWallet;
		wallets[secondIndex] = toWallet;
	}
	else {
		cout << "ERROR!" << endl;
	}
	
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
