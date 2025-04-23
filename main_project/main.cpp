#include "Initializer.h"
int main() {
	int count;
	cout << "Input count of student: ";
	cin >> count;

	Student* list=nullptr;

	Initializer initializer;
	initializer.init(list, count);
	int c = 1;
	for (int i = 0; i < count; i++) {
		cout <<c<<"  "<< list[i].toString() << endl;
		c++;
	}
	return 0;
}  