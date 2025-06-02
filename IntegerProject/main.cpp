#include "Integer.h"

int main() {
    Integer num{};
   
    int number;
    cout << "Input number: " << endl;
    cin >> number;
    num.setNumber(number);

    num = num.add(3);
    cout << "add: " <<num.getNumber() << endl;

    num = num.substract(3);
    cout << "Substract: "<< num.getNumber() << endl;

    num = num.divide(2);
    cout  << "Divide: "<< num.getNumber() << endl;

    num = num.multiply(3);
    cout<< "Multiply: " << num.getNumber() << endl;

    num = num.mod(2);
    cout << "Mod: "<< num.getNumber() << endl;

    //int value;
    //cout << "Input number: " << endl;
    //cin >> value;

    //cout << "Number " << num.getNumber() << endl;

    //num.add(value);
    //cout << "After adding (" << number << "+" << value <<
    //    "): " << num.getNumber() << endl;

    //num.setNumber(number);

    //num.subtract(value);
    //cout << "After substraction (" << number << "-" << value <<
    //    "): " << num.getNumber() << endl;

    //num.setNumber(number);

    //num.multiply(value);
    //cout << "After multiplying (" << number << "*" << value <<
    //    "): " << num.getNumber() << endl;

    //num.setNumber(number);

    //num.divide(value);
    //cout << "After dividing (" << number << "/" << value <<
    //    "): " << num.getNumber() << endl;

    return 0;
}
