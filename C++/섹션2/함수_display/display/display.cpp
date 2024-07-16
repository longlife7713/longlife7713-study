#include <iostream>

using namespace std;

void display(char c = '^', int n = 10);

int main() {

	display();

	cout << endl;

	display('=', 20);

	cout << endl;

	display('v');

	cout << endl;

	return 0;
}


void display(char c, int n) {
	int i;

	for (i = 0; i < n; i++) {
		cout << c;
	}

	cout << endl;
}

