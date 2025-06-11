#pragma once
#include "Figure.h"

class Editor
{
public:
	string printAllFigures(Figure** figures, int size) {
		string s = "";
		for (int i = 0; i < size; i++) {
			s += figures[i]->printInfo();
		}
		return s;
	}

	Figure* findMaxArea(Figure** figures, int size) {
		if (size <= 0) return nullptr;

		Figure* maxAreaFigure = figures[0];
		for (int i = 0; i < size; i++) {
			if (figures[i]->area() > maxAreaFigure->area()) {
				maxAreaFigure = figures[i];
			}
		}

		return maxAreaFigure;
	}

	Figure* findMinPerimetr(Figure** figures, int size) {
		if (size == 0) return nullptr;

		Figure* minPerimetrFigure = figures[0];
		for (int i = 0; i < size; i++) {
			if (figures[i]->perimetr() < minPerimetrFigure->perimetr()) {
				minPerimetrFigure = figures[i];
			}
		}

		return minPerimetrFigure;
	}

	int totalArea(Figure** figures, int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += figures[i]->area();
		}
		return sum;
	}

	int totalPerimetr(Figure** figures, int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += figures[i]->perimetr();
		}
		return sum;
	}

};