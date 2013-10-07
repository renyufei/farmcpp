#include <iostream>

int main()
{
	int i = 0;
	const int &ri = i;
	std::cout << i << " " << ri << std::endl;
	i = 5;
	std::cout << i << " " << ri << std::endl;

	const double d1 = 0.1;
	const double d2 = 0.2;
	const double *dp = &d1;
	std::cout << *dp << std::endl;
	dp = &d2;
	std::cout << *dp << std::endl;

	return 0;
}
