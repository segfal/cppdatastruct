#include "set.hpp"


Set::Set() {
    size = 0;
    capacity = 1;
    arr = new int[capacity];
}


Set::Set(int cap) {
    size = 0;
    capacity = cap;
    arr = new int[capacity];
}


Set::Set(const Set& s) {
    size = s.size;
    capacity = s.capacity;
    arr = new int[capacity];
    for (int i = 0; i < size; i++) {
        arr[i] = s.arr[i];
    }
}

Set::~Set() {
    delete[] arr;
}

bool Set::contains(int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return true;
        }
    }
    return false;
}

void Set::add(int n) {
    if (size == capacity) {
        resize();
    }
    if (!contains(n)) {
        arr[size] = n;
        size++;
    }
    
}

int Set::getSize() {
    return size;
}

int Set::getCapacity() {
    return capacity;
}

void Set::remove(int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }
}


///Test