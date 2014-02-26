#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int ia[3][4] = {0};
	size_t cnt;

	for (auto &row : ia)
		for (auto &col : row)
			col = cnt ++;

	for (const auto &row : ia) {
		for (auto &col : row)
			cout << col << " ";
		cout << endl;
	}

}
