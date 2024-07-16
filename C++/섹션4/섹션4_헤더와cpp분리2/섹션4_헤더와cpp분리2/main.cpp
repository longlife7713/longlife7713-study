#include <iostream>

using namespace std;

#include "Rectangle.h"

int main() {

	Rectangle rect1{ 3,4 };
	Rectangle rect2{};
	Rectangle rect3{2};

	/*
	Rectangle rect2();
	위 코드 사용 시 함수와 혼동되어 error 발생
	C++에서는 함수와 혼동 막기 위해 {}중괄호 사용권장
	*/

	cout << "rect1의 넓이 : " << rect1.calcArea() << endl;
	cout << "rect2의 넓이 : " << rect2.calcArea() << endl;
	cout << "rect3의 넓이 : " << rect3.calcArea() << endl;

	return 0;
}