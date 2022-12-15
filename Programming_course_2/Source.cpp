//Основной файл где будет происходить сборка

#include <iostream>
#include "Category_earn.h"
#include "Category_spend.h"
#include "Stats.h"
#include "User.h"
#include "Wallet.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	//TEST
	User Ivan("Ivan");
	Wallet Nalichka("Наличные", 100);
	Wallet Bank("Банк", 100);
	Category_earn Podrabotka("Подработка", 0);
	Category_spend Mashina("Машина");
	Category_spend Komunalka("Коммуналка", 0, 100);
	Ivan.addWallets(Nalichka);
	Ivan.addWallets(Bank);
	Ivan.addEarn(Podrabotka);
	Ivan.addSpend(Mashina);
	Ivan.addSpend(Komunalka);
	Ivan.walletOperation("Наличные", "Банк", 20);
	Ivan.print();
	//TEST

	return 0;
}