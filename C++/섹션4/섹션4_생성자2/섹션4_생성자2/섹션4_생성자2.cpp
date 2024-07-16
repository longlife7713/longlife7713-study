#include <iostream>

using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int x);
	Rectangle(int x, int y);
	int isSquare();
};

Rectangle::Rectangle() : Rectangle(1, 1) {}

/* 
Rectangle::Rectangle() {
	width = height = 1;
}
*/

Rectangle::Rectangle(int x) : Rectangle(x, x) {}

/*
Rectangle :: Rectangle(int x){
	width = height = x;
{
*/

Rectangle :: Rectangle(int x, int y) {
	width = x;
	height = y;
}

int Rectangle :: isSquare() {
	if (width == height) 
		return 1;
	else
		return 0;
}

/*
bool Rectangle :: isSquare(){
	if(width == height)
		return true;
	else
		return False;
}
*/

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare() == 1) {
		cout << "rect1은 정사각형이다." << endl;
	}
	else
		cout << "rect1은 정사각형이 아닙니다." << endl;

	if (rect2.isSquare() == 1) {
		cout << "rect2는 정사각형이다." << endl;
	}
	else
		cout << "rect2은 정사각형이 아닙니다." << endl;

	if (rect3.isSquare() == 1) {
		cout << "rect3은 정사각형이다." << endl;
	}
	else
		cout << "rect3은 정사각형이 아닙니다." << endl;


	return 0;
}