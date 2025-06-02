#include "main.h"

void test(int*& arr, int size) {
	if (arr == nullptr && size > 0) {
		arr = new int[size];
	}

	for (int i = 0; i < size; i++) {
		arr[i] = 1;
	}
}

string convert(int* arr, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s += to_string(arr[i]) + " ";
	}
	return s;
}

int main() {
	int size = 10;
	//int* arr = new int[size] {};
	int* arr = nullptr;

	//cout << "Before: " << convert(arr, size) << endl;
	test(arr, size);
	cout << "After: " << convert(arr, size);
	delete[] arr;
	return 0;
}