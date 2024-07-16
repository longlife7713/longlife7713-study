#include <iostream>

using namespace std;

int big(int x, int y);
void swap(int& x, int& y);

int main() {
	int a, b;
	cin >> a >> b;

	cout << "더 큰 수 : " << big(a, b);
	cout << endl;

	cout << "swap 전 : " << a << " " << b << endl;
	swap(a, b);
	cout << "swap 후 : " << a  << " " << b;

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