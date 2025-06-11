#include "Figure.h"
#include "Editor.h"
#include "Point.h"
#include "Circle.h"
#include "Line.h"
#include "Rectangle.h"
#include "Triangle.h" 

int main() {
    int size = 5;

    Figure** figures = new Figure * [size]
        {
            new Point(3, 4),
                new Line(Point(1, 1), Point(4, 5)),
                new Circle(Point(1, 1), 3),
                new Rectangle(Point(5, 2), 3, 2),
                new Triangle(Point(0, 0), Point(4, 0), Point(2, 3))
        };

        Editor editor;
        string allFigures = editor.printAllFigures(figures, size);
        Figure* maxArea = editor.findMaxArea(figures, size);
        Figure* minPerimeter = editor.findMinPerimetr(figures, size);
        double totalPerimeter = editor.totalPerimetr(figures, size);
        double totalArea = editor.totalArea(figures, size);

        cout << "ALL FIGURES:\n" << allFigures << endl;
        cout << "STATISTICS:\n";
        cout << "--------------------------------\n";
        cout << "Figure with maximum area:   " << (maxArea ? maxArea->printInfo() : "None") << endl;
        cout << "Figure with minimum perimeter: " << (minPerimeter ? minPerimeter->printInfo() : "None") << endl;
        cout << "Total perimeter of all figures: " << totalPerimeter << endl;
        cout << "Total area of all figures:      " << totalArea << endl;
        cout << "--------------------------------\n";

        for (int i = 0; i < size; ++i) {
            delete figures[i];
        }
        delete[] figures;
        return 0;
}
