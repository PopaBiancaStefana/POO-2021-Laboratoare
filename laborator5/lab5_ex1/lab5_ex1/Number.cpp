#include "Number.h"

Number::Number(const char* value, int base)
{
	strcpy(nr, value);
	baza = base;
}

char Number::operator [](int index)
{
	return (nr)[index];
}

int Number:: operator< ( Number v)
{
	int a = toDeci(nr);
	int b = toDeci(v.nr);
	if (a < b)
		return 1;
	return 0;
}

void  Number:: operator-- ()
{

}

Number operator+ (Number v1, Number v2) 
{
	
	int a = toDeci(v1);
	int b = toDeci(v1);
	int s = a + b;
	int baz;
	if (v1.baza > v2.baza)
		baz = v1.baza;
	else
		baz = v2.baza;
	Number rezultat( DecitoBase(s, baz) , baz);
	return (rezultat);
	
}
Number::Number (const Number & d)
{
	strcpy(nr, d.nr);
	baza = d.baza;
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

int Number::toDeci(const char* v)
{
	int n = GetDigitsCount();

	int num = 0, putere = 1, i;

	for (i = n - 1; i >= 0; i--)
	{
		num = num + valoare(v[i]) * putere;
		putere = putere * baza;
	}
	return num;
}

char * Number::DecitoBase(int num, int base )
{
	int i = 0;
	char s[30];
	while (num > 0)
	{
		s[i++] = reValoare(num % base);
		num /= base;
	}
	s[i] = '\0';

	//inverseaza sir
	int len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	return s;
}

void Number::SwitchBase(int newBase)
{
	int n = GetDigitsCount();

	//baza veche in 10
	int num= toDeci(nr);

	//baza 10 in baza noua
	int i = 0;
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