#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> iv;

	for (int i = 0; i < 100; i++) {
		iv.push_back(i);
	}

	cout << iv.size() << endl;

	return 0;
}

