#include <iostream>

using namespace std;

class Circle {
public : 
	double calcArea();

	int radius;
	string color;
};

double Circle::calcArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle obj;

	obj.radius = 10;
	cout << obj.calcArea() << endl;

	return 0;
}