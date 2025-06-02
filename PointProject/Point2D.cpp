#include "Point2D.h"

Point2D Point2D::sum(Point2D point) {
	return Point2D(x + point.x, y + point.y);
}

Point2D Point2D::sum(int value) {
	return Point2D(x + value, y + value);
}

Point2D Point2D::sub(Point2D point) {
	return Point2D(x - point.x, y - point.y);
}

Point2D Point2D::sub(int value) {
	return Point2D(x - value, y - value);
}

Point2D Point2D::minus() {
	return Point2D(-x, -y);
}

Point2D Point2D::operator+(Point2D point) {
	return Point2D(x + point.x, y + point.y);
}

Point2D Point2D::operator+(int value) {
	return Point2D(x + value, y + value);
}
Point2D Point2D::operator-(Point2D point) {
	return sub(point);
}

Point2D Point2D::operator-(int value) {
	return sub(value);
}

Point2D Point2D::operator-() {
	return minus();
}

Point2D Point2D::operator*(int value) {
	return Point2D(x * value, y * value);
}

Point2D Point2D::operator/(int value) {
	return Point2D(x / value, y / value);
}

double Point2D::length() {
	return sqrt(x * x + y * y);
}

bool Point2D::operator==(Point2D point) {
	return x == point.x && y == point.y;
}

bool Point2D::operator!=(Point2D point) {
	return !(*this == point);
}

bool Point2D::operator>(Point2D point) {
	return length() > point.length();
}

bool Point2D::operator>=(Point2D point) {
	return length() >= point.length();
}

bool Point2D::operator<(Point2D point) {
	return !(*this >= point);
}

bool Point2D::operator<=(Point2D point) {
	return !(*this > point);
}
