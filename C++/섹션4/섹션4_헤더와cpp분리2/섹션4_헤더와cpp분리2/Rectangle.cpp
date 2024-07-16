#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle() :Rectangle(1, 1) {}

Rectangle::Rectangle(int w) :Rectangle(w, w) {}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

int Rectangle::calcArea() {
	return width * height;
}