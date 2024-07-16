#include <iostream>

using namespace std;

inline int sum(int a = 0, int b = 0, int c = 0);

int main() {

	cout << sum() << endl << sum(10) << endl << sum(10, 20) <<
		endl << sum(10, 20, 30);

	return 0;
}

inline int sum(int a, int b, int c) {
	int result;
	result = a + b + c;
	return result;
}