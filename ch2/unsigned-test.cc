#include <iostream>

int main()
{
	int i1 = 10, i2 = 42;

	std::cout << i2 - i1 << std::endl;
	std::cout << i1 - i2 << std::endl;

	unsigned int u1 = 10, u2 = 42;

	std::cout << u2 - u1 << std::endl;
	std::cout << u1 - u2 << std::endl;

	std::cout << i1 - u1 << std::endl;
	std::cout << u1 - i1 << std::endl;

	return 0;
}
