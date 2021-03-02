#include "Math.h"

int Math::Add(int x, int y) 
{
	return x + y;
}

int Math::Add(int x, int y, int z)
{
	return x + y + z;
}

int Math::Add(double x, double y)
{
	return x + y;
}

 int Math::Add(double x, double y, double z)
{
	return x + y + z;
}

 int Math::Mul(int x, int y)
{
	return x * y;
}

int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}

 int Math::Mul(double x, double y)
{
	return x * y;
}

 int Mul(double x, double y, double z)
{
	return x * y * z;
}

int Math::Add(int count , ...) // sums up a list of integers
{
	va_list lista;
	va_start(lista, count);

	int i, s = 0;

	for (i = 0; i < count; i++)
	{
		s = s + va_arg(lista, int);
	}
	va_end(lista);
	return s;
}

// char* Math::Add(const char* x, const char* y);
