#pragma once
#include <iostream>

using namespace std;

class Test {
private:
	int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
public:
	int* getArray();
	int& operator [] (const int& index);
};