#pragma once
#include "Figure.h"
#include "Point.h"
class Line :
    public Figure
{
private:
    Point start;
    Point end;
public:
    Line(Point start, Point end) : start(start), end(end) {}

    Point& getStart() { return start; }
    Point& getEnd() { return end; }


    int perimetr() override {
        int dx = end.getX() - start.getX();
        int dy = end.getY() - start.getY();
        return sqrt(dx * dx + dy * dy);
    }

    double distanceFromOrigin() {
        int centerX = (start.getX() + end.getX() / 2);
        int centerY = (start.getY() + end.getY() / 2);
        return sqrt(pow(centerX, 2) + pow(centerY, 2));
    }

    string printInfo() override {
        string s = "";
        s += "Line: from (" + to_string(start.getX()) + to_string(start.getY())
            + "), to (" + to_string(end.getX()) + to_string(end.getY()) + ")\n";
        return s;
    }
    string getType() override {
        return "Line";
    }
};