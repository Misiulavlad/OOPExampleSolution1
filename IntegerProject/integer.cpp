#include "Integer.h"

int Integer::getNumber() {
    return value;
}

void Integer::setNumber(int value) {
    this->value = value;
}

// a + b --> c
// a.add(b) --> c
Integer Integer::add(Integer integer) {
    return Integer(value + integer.value);
}

Integer Integer::substract(Integer integer) {
    return Integer(value - integer.value);
}

Integer Integer::multiply(Integer integer) {
    return Integer(value * integer.value);
}
Integer Integer::divide(Integer integer) {
    return Integer(value / integer.value);
}

Integer Integer::mod(Integer integer) {
    return Integer(value % integer.value);
}