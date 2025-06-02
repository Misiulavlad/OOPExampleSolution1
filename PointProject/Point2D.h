#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Point2D
{
private:
	int x;
	int y;

	double length();

public:
	Point2D() :x(0), y(0) {}
	Point2D(int x, int y) :x(x), y(y) {}

	int getX() const { return x; }
	void setX(int x) { this->x = x; }
	int getY() const { return y; }
	void setY(int y) { this->y = y; }
	string toString() {
		return "x = " + to_string(x)
			+ ", y = " + to_string(y);
	}

	// overloading (??????????), static binding
	// ??????????? ???????????, ?????? ??????????


	// overriding (???????????????), dinamic binding
	// ???????????? ???????????, ??????? ??????????



	Point2D sum(Point2D point);
	Point2D sum(int value);
	Point2D sub(Point2D point);
	Point2D sub(int value);
	Point2D minus();

	Point2D operator+(Point2D point);
	Point2D operator+(int value);
	Point2D operator-(Point2D point);
	Point2D operator-(int value);
	Point2D operator-();
	Point2D operator*(int value);
	Point2D operator/(int value);

	bool operator==(Point2D point);
	bool operator!=(Point2D point);
	bool operator>(Point2D point);
	bool operator<(Point2D point);
	bool operator>=(Point2D point);
	bool operator<=(Point2D point);
};
