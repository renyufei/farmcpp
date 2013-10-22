#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main()
{
	int ia[] = {1, 2, 3, 4, 5};

	int *pbeg = begin(ia);
	int *pend = end(ia);

	while (*pbeg != *pend) {
		cout << *pbeg << endl;
		pbeg ++;
	}

	return 0;
}

