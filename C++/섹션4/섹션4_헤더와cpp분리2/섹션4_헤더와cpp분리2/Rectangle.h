#pragma once

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
	int width, height;
public :
	Rectangle();
	Rectangle(int w);
	Rectangle(int w, int h);
	int calcArea();
};

#endif