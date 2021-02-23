#include "NumberList.h"

int main()
{
	NumberList nl;
	nl.Init();
	nl.Add(5);
	nl.Add(2);
	nl.Add(4);
	nl.Print();
	return 0;
}