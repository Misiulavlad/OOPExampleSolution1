//#include "ArrayList.h"
//
//ArrayList::ArrayList() {
//    size = 0;
//    array = nullptr;
//}
//
//ArrayList::~ArrayList() {
//    if (array != nullptr) {
//        delete[] array;
//    }
//}
//
//void ArrayList::add(int value) {
//    if (array != nullptr) {
//        int* newArray = new int[size + 1];
//
//        for (int i = 0; i < size; i++) {
//            newArray[i] = array[i];
//        }
//
//
//        delete[] array;
//
//        array = newArray;
//        size++;
//    }
//    else {
//        array = new int[1];
//        array[0] = value;
//        size = 1;
//    }
//}
//
//
//
//void ArrayList::add(int index, int value) {
//    if (index < 0 || index > size) return;
//
//    int* newArray = new int[size + 1];
//
//    for (int i = 0, j = 0; i < size + 1; i++) {
//        if (i == index) {
//            newArray[i] = value;
//        }
//        else {
//            newArray[i] = array[j++];
//        }
//    }
//
//    delete[] array;
//    array = newArray;
//    size++;
//}
//
//void ArrayList::addAll(int* values, int count, int index) {
//    if (values == nullptr || count <= 0 || index < 0 || index > size) return;
//
//    int* newArray = new int[size + count];
//
//    for (int i = 0, j = 0; i < size + count; i++) {
//        if (i >= index && i < index + count) {
//            newArray[i] = values[i - index];
//        }
//        else {
//            newArray[i] = array[j++];
//        }
//    }
//
//    delete[] array;
//    array = newArray;
//    size += count;
//}
//
//void ArrayList::remove(int index) {
//    if (index < 0 || index >= size) return;
//
//    int* newArray = new int[size - 1];
//
//    for (int i = 0, j = 0; i < size; i++) {
//        if (i != index) {
//            newArray[j++] = array[i];
//        }
//    }
//
//    delete[] array;
//    array = newArray;
//    size--;
//}
//
//void ArrayList::clear() {
//    delete[] array;
//    array = nullptr;
//    size = 0;
//}
//
//int ArrayList::getSize() {
//    return size;
//}
//
//int ArrayList::get(int index, int size) {
//    if (index < 0 || index >= size) {
//
//    }
//    return array[index];
//}
//
//void ArrayList::set(int index, int value) {
//    if (index < 0 || index >= size) {
//
//    }
//    array[index] = value;
//}
//
//bool ArrayList::isEmpty() {
//    return size == 0;
//}
//
//string ArrayList::toString() {
//    if (size == 0) return "[]";
//
//    string result = "[";
//    for (int i = 0; i < size; i++) {
//        result += to_string(array[i]);
//        if (i < size - 1) {
//            result += ", ";
//        }
//    }
//    result += "]";
//    return result;
//}