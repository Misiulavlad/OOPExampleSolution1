#pragma once
#include "Figure.h"
#include "Point.h"

class Triangle : public Figure
{
private:
    Point p1, p2, p3;

    double sideLength(const Point& a, const Point& b) {
        return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
    }

public:
    Triangle(Point p1, Point p2, Point p3)
        : p1(p1), p2(p2), p3(p3) {
    }

    Point getP1() { return p1; }
    Point getP2() { return p2; }
    Point getP3() { return p3; }

    int area() override {
        return abs((p1.getX() * (p2.getY() - p3.getY()) +
            p2.getX() * (p3.getY() - p1.getY()) +
            p3.getX() * (p1.getY() - p2.getY())) / 2);
    }

    int perimetr() override {
        return static_cast<int>(
            sideLength(p1, p2) + sideLength(p2, p3) + sideLength(p3, p1)
            );
    }

    double distanceFromOrigin() override {
        double cx = (p1.getX() + p2.getX() + p3.getX()) / 3.0;
        double cy = (p1.getY() + p2.getY() + p3.getY()) / 3.0;
        return sqrt(cx * cx + cy * cy);
    }

    string printInfo() override {
        string s = "Triangle: points (" +
            to_string(p1.getX()) + ", " + to_string(p1.getY()) + "), (" +
            to_string(p2.getX()) + ", " + to_string(p2.getY()) + "), (" +
            to_string(p3.getX()) + ", " + to_string(p3.getY()) + ")\n";
        return s;
    }

    string getType() override {
        return "Triangle";
    }
};