#include"main.h"

class Human
{
private:
	string name;
	bool gender;
	int age;
protected:
	// ...
public:
	
	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);
	~Human();

	string getName();
	void setName(string name);
	void setAge(int age);
	int getAge();
	bool isGender();
	void setGender(bool gender);
	string toString();
};

