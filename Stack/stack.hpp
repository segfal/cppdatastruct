#ifndef     STACK_HPP
#define     STACK_HPP
#include    <iostream>

class stack
{
public:
    stack();
    ~stack();
    void push(int);
    int pop();
    int top();
    bool empty();
    bool full();
    void clear();
    void print();
private:
    int *_stack;
    int _top;
    int _size;

};


#endif