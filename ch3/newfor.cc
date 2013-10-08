#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string str("AaBbCc");
	for (auto c: str)
		if (isupper(c))
			cout << c << endl;

	return 0;
}
