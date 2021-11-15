#ifndef SET_HPP
#define SET_HPP
#include <iostream>

class Set {
    private:
        int *arr;
        int size;
        int capacity;
        void resize();
    public:
        Set();
        Set(int);
        Set(const Set&);
        ~Set();
        Set& operator=(const Set&);
        void add(int);
        void remove(int);
        bool contains(int);
        int getSize();
        int getCapacity();
        void print();
};



#include "set.cpp"






#endif