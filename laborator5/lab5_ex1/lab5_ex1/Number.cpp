#include "Number.h"

Number::Number(const char* value, int base)
{
	strcpy(nr, value);
	baza = base;
}

int Number::valoare(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}

char Number::reValoare(int x)
{
	if (x >= 0 && x <= 9)
		return (char)(x + '0');
	else
		return (char)(x - 10 + 'A');
}

void Number::SwitchBase(int newBase)
{
	int n = GetDigitsCount();

	//baza veche in 10
	int num = 0, putere = 1, i;

	for (i = n - 1; i >= 0; i--)
	{
		num = num + valoare(nr[i]) * putere;
		putere = putere * baza;
	}

	//baza 10 in baza noua
	i = 0;
	while (num> 0)
	{
		nr[i++] = reValoare(num % newBase);
		num /= newBase;
	}
	nr[i] = '\0';

	//inverseaza sir
	int len = strlen(nr);
	for (i = 0; i < len / 2; i++)
	{
		char temp = nr[i];
		nr[i] = nr[len - i - 1];
		nr[len - i - 1] = temp;
	}

	baza = newBase;
}

void Number::Print()
{
	cout << nr << endl << baza;
}

int Number::GetBase() // returns the current base
{
	return baza;
}

int  Number::GetDigitsCount()
{
	cout << strlen(nr) << endl;
}