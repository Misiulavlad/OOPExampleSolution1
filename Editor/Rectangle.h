#pragma once
#include "Figure.h"
#include "Point.h"

class Rectangle :
	public Figure
{
private:
	Point topLeft;
	int height, width;

public:
	Rectangle(Point topLeft, int width, int height)
		: topLeft(topLeft), width(width), height(height) {
	}
	Point& getTopLeft() { return topLeft; }
	int getWidth() { return width; }
	int getHeight() { return height; }

	int area() override {
		return width * height;
	}
	int perimetr() override {
		return 2 * (width + height);
	}

	double distanceFromOrigin() override {
		int centerX = topLeft.getX() + width / 2;
		int centerY = topLeft.getY() - height / 2;
		return sqrt(pow(centerX, 2) + pow(centerY, 2));
	}
	string printInfo() override {
		string s = "";
		s += "Rectangle: top-left point (" + to_string(topLeft.getX()) + ", "
			+ to_string(topLeft.getY()) + "), width: " + to_string(width)
			+ ", height: " + to_string(height) + "\n";
		return s;
	}

	string getType() override {
		return "Rectangle";
	}
};