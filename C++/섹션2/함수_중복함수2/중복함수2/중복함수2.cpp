#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void print(int x);
void print(double x);
void print(string x);
void print(char x);

int main() {
	
	print(10);
	print(2.5);
	print("Jang");
	print('A');

	return 0;
}

void print(int x) {
	cout << x << endl;
}

void print(double x) {
	cout << x << endl;
}

void print(string x) {
	cout << x << endl;
}

void print(char x) {
	cout << x << endl;
}