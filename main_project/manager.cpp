#include "Manager.h"


Student* Manager::getBestStudents(Student* list, int count1, int* count2) {
	*count2 = 0;

	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() >= 8) {
			++*count2;
		}
	}

	Student* best = new Student[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() >= 8) {
			best[j] = list[i];
			j++;
		}
	}

	return best;
}

Student* Manager::getWorstStudents(Student* list, int count1, int* count2) {
	*count2 = 0;

	for (int i = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() <= 5) {
			++*count2;
		}
	}

	Student* worst = new Student[*count2];

	for (int i = 0, j = 0; i < count1; i++)
	{
		if (list[i].getAverageMark() <= 5) {
			worst[j] = list[i];
			j++;
		}
	}

	return worst;
}