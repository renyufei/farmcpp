#include <iostream>

int main()
{
	const int i = 5;
	const int *ci = &i;
	int *ip = nullptr;

	//	ip = ci; error
	ci = ip;
	return 0;
}

