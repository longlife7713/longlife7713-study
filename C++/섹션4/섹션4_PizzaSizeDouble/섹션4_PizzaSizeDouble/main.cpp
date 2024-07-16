#include <iostream>
using namespace std;

class Pizza {
public:
	Pizza(int s) : size{ s } {}
	int size;
};

void makeDouble(Pizza &p) {
	p.size *= 2;
}

int main() {
	Pizza p(10);
	makeDouble(p);
	cout << p.size << "인치 피자" << endl;

	return 0;
}