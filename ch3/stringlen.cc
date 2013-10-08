#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("hello");
	int len = -1;
	if (s.size() < len)
		cout << "-1 is longer" << endl;
	else
		cout << "s is bigger" << endl;

	return 0;
}
