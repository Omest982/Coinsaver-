//Основной файл где будет происходить сборка

#include <iostream>
#include "Category_earn.h"
#include "Category_spend.h"
#include "Stats.h"
#include "User.h"
#include "Wallet.h"

using namespace std;

int main() {
	//TEST
	User a;
	Wallet b, c;
	vector<Wallet> WAL = { b, c };
	a.setWallets(WAL);
	a.print();
	//TEST

	return 0;
}