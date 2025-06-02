#include<iostream>
using namespace std;

class Integer {
private:	
	int value;
public:
	Integer() : Integer(0) { }
	Integer(int value) { this->value = value; }

	int getNumber();
	void setNumber(int a);

	Integer add(Integer integer);
	Integer substract(Integer integer);
	Integer multiply(Integer integer);
	Integer divide(Integer integer);
	Integer mod(Integer value);
};