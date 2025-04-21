#include "main.h"
class Student {
public:
	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;

	Student() {
		cout << "Default-constructor..." << endl;
		name = "nn";
		age = 13;
		marks = nullptr;
		countMark = 0;
		alive = true;

	}

	// constructor with arguments
	Student(string nm, int a) :Student(name, a, 0, true) {
		cout << "constructor with arguments..." << endl;


	}

	Student(string name, int age, int countMark, bool alive) {
		cout << "canonical constructor with arguments..." << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		this->countMark = countMark;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++) {
			marks[i] = 4;
		}
	}

	Student(const Student& student) : Student(student.name, student.age,
		student.countMark, student.alive) {
		cout << "copy constructor..." << endl;
	}

	~Student() {
		//cout << "Destructor..." << endl;
		if (marks != nullptr) {
			delete[] marks;
		}
	}

	string toString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", mark: " + getAllMarks();
		s += ", alive: ";
		s += (alive ? "Yes" : "No");
		return s;
	}

	string getAllMarks() {
		string s = "";
		for (int i = 0; i < countMark; i++) {
			s += to_string(marks[i]) + " ";

			return s;
		}
	}


	int getMark(int index) {
		return index < 0 || index > countMark || !marks ? 0 : marks[index];
	}

	void setMark(int index, int mark) {
		if (index >= 0 && index < countMark && marks) {
			marks[index] = mark;
		}
	}

};