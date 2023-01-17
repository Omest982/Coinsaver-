#include "User.h"


int User::userAmount = 0;

User::User()
{
	name = "noName";
	wallets = {};
	earn = {};
	spend = {};
	userAmount++;
}

User::User(string _name) {
	name = _name;
	wallets = {};
	earn = {};
	spend = {};
	userAmount++;
}

User::User(const User& _user)
{
	name = _user.getName();
	/*if (_user.getWallets().size() > 0) {
		vector<Wallet> newWallets = _user.getWallets();
		for (int i = 0; i < newWallets.size(); i++) {
			newWallets[i].setMoney(0);
		}
		wallets = newWallets;
	}*/
	wallets = _user.getWallets();
	if (_user.getEarn().size() > 0) {
		vector<Category_earn> newEarn = _user.getEarn();
		for (int i = 0; i < newEarn.size(); i++) {
			newEarn[i].setMoney(0);
		}
		earn = newEarn;
	}
	if (_user.getSpend().size() > 0) {
		vector<Category_spend> newSpend = _user.getSpend();
		for (int i = 0; i < newSpend.size(); i++) {
			newSpend[i].setMoney(0);
		}
		spend = newSpend;
	}
	userAmount++;
}

User::User(string _name, vector<Wallet> _wallets, vector<Category_earn> _earn, vector<Category_spend> _spend)
{
	name = _name;
	wallets = _wallets;
	earn = _earn;
	spend = _spend;
	userAmount++;
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

void User::addWallet(Wallet newWallet)
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

string User::getName() const
{
	return name;
}

vector <Wallet> User::getWallets() const
{
	return wallets;
}

vector<Category_earn> User::getEarn() const
{
	return earn;
}

vector<Category_spend> User::getSpend() const
{
	return spend;
}

Stats User::getStat() const
{
	return stat;
}

int User::getUserAmount() const
{
	return userAmount;
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
	if (_Wallet.getMoney() < amount) {
		cout << "Not enough money!!" << endl;
		return;
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
		return;
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
		if (find == 2) {
			break;
		}
		else if (fromWalletName == wallets[i].getName()) {
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
	cout << "Name: " << name << endl;
	cout << "Wallets: ";
	for (int i = 0; i < wallets.size(); i++) {
		cout << wallets[i].getName() << " ";
	}
	cout << endl << "Earn categories: ";
	for (int i = 0; i < earn.size(); i++) {
		cout << earn[i].getName() << " ";
	}
	cout << endl << "Spend categories: ";
	for (int i = 0; i < spend.size(); i++) {
		cout << spend[i].getName() << " ";
	}
	cout << endl;
}

ostream& operator<<(ostream& out, const User& _user)
{
	out << "Name: " << _user.getName() << endl;
	out << "Wallets: ";
	vector<Wallet> _wallets = _user.getWallets();
	for (int i = 0; i < _wallets.size(); i++) {
		out << _wallets[i].getName() << " ";
	}
	out << endl << "Earn categories: ";
	vector<Category_earn> _earn = _user.getEarn();
	for (int i = 0; i < _earn.size(); i++) {
		out << _earn[i].getName() << " ";
	}
	out << endl << "Spend categories: ";
	vector<Category_spend> _spend = _user.getSpend();
	for (int i = 0; i < _spend.size(); i++) {
		out << _spend[i].getName() << " ";
	}
	out << endl;
	return out;
}