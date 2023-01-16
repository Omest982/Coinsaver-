//Основной файл где будет происходить сборка

#include <iostream>
#include "Category_earn.h"
#include "Category_spend.h"
#include "Stats.h"
#include "User.h"
#include "Wallet.h"
#include "Account.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//TEST
	User Ivan("Ivan");
	Wallet Nalichka("Наличные", 100);
	Wallet Bank("Банк", 100);
	Category_earn Podrabotka("Подработка");
	Category_spend Mashina("Car", 20);
	Category_spend Komunalka("Коммуналка", 100);
	Ivan.addWallet(Nalichka);
	Ivan.addWallet(Bank);
	Ivan.addEarn(Podrabotka);
	Ivan.addSpend(Mashina);
	Ivan.addSpend(Komunalka);
	Ivan.walletOperation("Наличные", "Банк", 20);
	Ivan.spendOperation("Банк", "Коммуналка", 110);
	Ivan.earnOperation("Наличные", "Подработка", 200);
	//User George(Ivan);
	bool result = Mashina == Komunalka;
	cout << result << endl;

	
	//TEST

	return 0;
}