#include <iostream>

using namespace std;

int big(int x, int y);
void swap(int& x, int& y);

int main() {
	int a, b;
	cin >> a >> b;

	cout << "�� ū �� : " << big(a, b);
	cout << endl;

	cout << "swap �� : " << a << " " << b << endl;
	swap(a, b);
	cout << "swap �� : " << a  << " " << b;

	return 0;
}

int big(int x, int y) {

	if (x > y) 
		return x;
	else
		return y;

}

void swap(int &x, int &y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}