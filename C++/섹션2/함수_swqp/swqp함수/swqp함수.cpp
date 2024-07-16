#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void swqp(int& x, int& y);

int main() {
	int a = 10, b = 20;

	cout << a << " " << b << endl;

	swap(a, b);

	cout << a << " " << b << endl;

	return 0;
}

void swqp(int& x, int& y) {
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}