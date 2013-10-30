#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int s, e;
	s = 35;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 4; j ++) {
			e = s - 1 + 8 * pow(2, j);
			cout << "=SUMPRODUCT(E" << s << ":E" << e << ",F" << s << ":F" << e << ")/SUM(F" << s << ":F" << e << ")" << endl;
			s = e + 2;
		}
	}
}

