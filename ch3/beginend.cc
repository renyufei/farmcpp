#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
	int arr[] = {0, 1, 2, 3};
	int *pbeg = begin(arr);
	int *pend = end(arr);

	int *ptr = pbeg;

	while (ptr != pend) {
		cout << *ptr << endl;
		ptr ++;
	}

}
