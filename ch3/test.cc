#include <iostream>
#include <list>
using std::list;

class Test {
 public:
	int a();
	list<double> dl;
};

int main()
{
	Test t;

	t.dl.push_back(3.1415);
}
