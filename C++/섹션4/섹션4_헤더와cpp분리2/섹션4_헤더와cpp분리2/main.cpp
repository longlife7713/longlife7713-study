#include <iostream>

using namespace std;

#include "Rectangle.h"

int main() {

	Rectangle rect1{ 3,4 };
	Rectangle rect2{};
	Rectangle rect3{2};

	/*
	Rectangle rect2();
	�� �ڵ� ��� �� �Լ��� ȥ���Ǿ� error �߻�
	C++������ �Լ��� ȥ�� ���� ���� {}�߰�ȣ ������
	*/

	cout << "rect1�� ���� : " << rect1.calcArea() << endl;
	cout << "rect2�� ���� : " << rect2.calcArea() << endl;
	cout << "rect3�� ���� : " << rect3.calcArea() << endl;

	return 0;
}