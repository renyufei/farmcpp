#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	const string hex("0123456789ABCDEF");
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hex.size())
			result += hex[n];
	cout << result << endl;
	return 0;
}

