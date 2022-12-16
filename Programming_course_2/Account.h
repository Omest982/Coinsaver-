#pragma once
#include <string>
#include <iostream>

using namespace std;

class Account {
private:
	string name; //��������
	int money;	 //����� ����������|��������� 
public:
	Account();		//������������
	Account(string);
	Account(string, int);
	~Account();		//����������
	void setName(string);
	void setMoney(int);
	string getName();
	int getMoney();
};