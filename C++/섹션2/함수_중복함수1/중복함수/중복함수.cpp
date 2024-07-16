#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int square(int x);
double square(double x);

int main() {

	cout << square(10) << endl;
	cout << square(2.5) << endl;

	return 0;
}

int square(int x) {
	x *= x;
	return x;
}

double square(double x) {
	x *= x;
	return x;
}