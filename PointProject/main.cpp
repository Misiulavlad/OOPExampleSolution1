#include "Point2D.h"

Point2D sum(Point2D left, Point2D right) {
	return Point2D(0, 0);
}

int main() {
	/*string s1, s2;
	cout << s1[0];

	int array[10]{};
	cout << array[0];
	int a = 1, int b;
	int c = a << 2;*/

	//string s3 = s1 + s2;
	//int a, b, c;
	//c = a + b;
	//c = a - b;
	//c = a * b;
	//c = a / b;
	//c = a % b;
	//++c;
	//c++;
	//a = -c;

	//c = a.sum(b)
	Point2D a(1, 1), b(2, 2);

	cout << a.toString() << " + " << b.toString()
		<< " = " << (a + 5).toString() << endl;

	int value = 5;
	cout << a.toString() << " + " << value
		<< " = " << (a + value).toString() << endl;


	return 0;
}