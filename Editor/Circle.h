#pragma once
#include "Figure.h"
#include "Point.h"
class Circle :
    public Figure
{
private:
    Point center;
    int radius;

public:
    Circle(Point center, int radius) : center(center), radius(radius) {}
    Point& getCenter() { return center; }
    int getRadius() { return radius; }

    int area() override {
        return 3.14 * radius * radius;
    }
    int perimetr() override {
        return 2 * 3.14 * radius;
    }

    double distanceFromOrigin() {
        return sqrt(pow(center.getX(), 2) + pow(center.getY(), 2));
    }

    string printInfo() override {
        string s = "";
        s += "Circle: center (" + to_string(center.getX()) + ", " + to_string(center.getY())
            + "), radius " + to_string(radius) + "\n";
        return s;
    }
    string getType() override {
        return "Circle";
    }

};