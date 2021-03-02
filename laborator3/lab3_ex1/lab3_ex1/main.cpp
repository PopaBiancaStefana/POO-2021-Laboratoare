#include "Math.h"

int main()
{
	std::cout << Math::Add(3, 6)<<endl;
	std::cout << Math::Add(3, 6, 7) << endl;
	std::cout << Math::Add(1.5, 4.2) << endl;
	std::cout << Math::Add(9.7, 4.2, 1.7) << endl;
	std::cout<<Math::Add(3, 6, 7, 8) << endl;
	std::cout << Math::Mul(2, 5) << endl;
	std::cout << Math::Mul(2, 3, 5) << endl;
	std::cout << Math::Mul(2.3, 5.0) << endl;
	std::cout << Math::Mul(2.3, 5.4, 1.2)<< endl;

	return 0;
}