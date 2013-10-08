#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s("Hello world!!!");
	decltype(s.size()) lower_nr = 0; // string::size_type
	for (auto &c: s)
		if (islower(c)) {
			c = toupper(c);
			lower_nr ++;
		}
	cout << s << endl;
	cout << lower_nr << endl;

	return 0;
}
