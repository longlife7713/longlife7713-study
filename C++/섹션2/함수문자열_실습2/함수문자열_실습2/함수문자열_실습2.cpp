#include <iostream>

using namespace std;

int f_abs(int x);
float f_abs(float x);

int main() {
	int a = -1;
	float b = 2.5;
	
	cout << f_abs(a) << " " << f_abs(b);

	return 0;
}

int f_abs(int x) {
	if (x < 0)
		return -x;
	else
		return x;
}

float f_abs(float x) {
	if (x < 0)
		return -x;
	else
		return x;
}