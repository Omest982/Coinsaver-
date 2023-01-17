#include "Test.h"

int* Test::getArray()
{
	return array;
}

int& Test::operator[](const int &index)
{
	return array[index];
}
