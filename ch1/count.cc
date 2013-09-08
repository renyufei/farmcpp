#include <iostream>

int main()
{
	int currVal, input, cnt;

	if (std::cin >> input) {
		cnt = 1;
		currVal = input;

		while (std::cin >> input) {
			if (currVal == input)
				++cnt;
			else {
				std::cout << currVal << " occurs " << cnt 
					  << " times." << std::endl;
				currVal = input;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt 
			  << " times." << std::endl;
	}

	return 0;
}
