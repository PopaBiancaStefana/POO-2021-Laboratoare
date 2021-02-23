#include "NumberList.h"

int main()
{
	NumberList nl;
	nl.Init();
	nl.Add(5);
	nl.Add(2);
	nl.Add(7);
	nl.Add(3);
	nl.Add(1);
	nl.Sort();
	nl.Print();

	return 0;
}