#include "Number.h"

Number::Number(const char* value, int base)
{
	strcpy(nr, value);
	baza = base;
}

void Number::Print()
{
	cout << nr << endl << baza;
}

int Number::GetBase() // returns the current base
{
	return baza;
}

