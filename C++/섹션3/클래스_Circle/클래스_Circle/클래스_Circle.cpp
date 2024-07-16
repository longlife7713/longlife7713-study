#include <iostream>

using namespace std;

class Circle {
public :
	int radius;
	string color;

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

class Rectangle {
public:
	int width, height;
	int calcArea() {
		return width * height;
	}
};

int main() {
	Circle obj, obj2;
	Rectangle obj3;

	obj.radius = 100;
	obj.color = "pink";

	obj2.radius = 300;
	obj2.color = "red";

	obj3.width = 200;
	obj3.height = 200;

	cout << "Radius of Circle1 : " << obj.radius << endl;
	cout << "Color of Circle1 : " << obj.color << "\n";
	cout << "Area of Circle1 : " << obj.calcArea() << endl;

	cout << endl;

	cout << "Radius of Circle2 : " << obj2.radius << endl;
	cout << "Color of Circle2 : " << obj2.color << "\n";
	cout << "Area of Circle2 : " << obj2.calcArea() << endl;

	cout << endl;

	cout << "Width of Rectangle : " << obj3.width << endl;
	cout << "Height of Rectangle : " << obj3.height << endl;
	cout << "Area of Rectangle : " << obj3.calcArea() << endl;

	return 0;
}