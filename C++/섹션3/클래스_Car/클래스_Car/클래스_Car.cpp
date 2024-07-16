#include <iostream>

using namespace std;

class Car {
public :
	int speed, gear;
	string color;

	void speedUP() {
		speed += 10;
	}

	void speedDown() {
		speed -= 10;
	}


};

int main() {

	Car mycar;

	mycar.speed = 100;
	mycar.color = "green";
	mycar.gear = 3;

	cout << "speed : " << mycar.speed << endl;
	cout << "color : " << mycar.color << endl;
	cout << "gear : " << mycar.gear << endl;

	cout << "spped up! " << endl;
	mycar.speedUP();
	cout << "speed : " << mycar.speed << endl;
	
	cout << "speed down.. " << endl;
	mycar.speedDown();
	cout << "speed : " << mycar.speed << endl;

	return 0;
}