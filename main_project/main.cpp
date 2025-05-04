#include "Manager.h"

int main() {
	int count;

	cout << "Input number of students: ";
	cin >> count;

	Student* list = nullptr;

	Initializer initializer;
	Manager manager;

	initializer.init(list, count);

	cout << "List of students:\n";
	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}

	int size = 0;
	Student* bestList = manager.getBestStudents(list, count, &size);

	cout << "\nList of best students:\n";
	for (int i = 0; i < size; i++)
	{
		cout << bestList[i].toString() << endl;
	}

	Student* worstList = manager.getWorstStudents(list, count, &size);

	cout << "\nList of worst students:\n";
	for (int i = 0; i < size; i++)
	{
		cout << worstList[i].toString() << endl;
	}

	delete[] list;
	delete[] bestList;
	delete[] worstList;

	return 0;
}