#include "NumberList.h"

void NumberList::Init()
{
	count = 0;
}

bool NumberList::Add(int x)
{
	
	if (count >= 10)
		return false;
	numbers[count++] = x;
	return true;
}

void NumberList::Sort()
{
	int i, j, aux;
	for (i = 0; i < count - 1; i++)
	{
		for ( j = i + 1; j < count; j++)
		{
			if (numbers[i] > numbers[j])
			{
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
		}
	}
}

void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
	{
		cout <<numbers[i] << " ";
	}

	std::cout << '\n';
}