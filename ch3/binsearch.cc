#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> vi;

	for (int i = 0; i < 100; i ++)
		vi.push_back(i);

	cout << vi.size() << endl;

	auto beg = vi.begin(), end = vi.end();
	auto mid = beg + (end - beg) / 2;
	int sought = 300;
	int count = 0;

	while ((mid != end) && (*mid != sought)) {
		if (sought > *mid)
			beg = mid + 1;
		else
			end = mid;
		mid = beg + (end - beg) / 2;
		cout << "mid is " << *mid << endl;
		count ++;
	}

	if (*mid == sought)
		cout << "got it by searching " << count << " times"<< endl;
	else
		cout << "can not got it" << endl;

	return 0;
}

