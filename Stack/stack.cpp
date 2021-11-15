#include "stack.hpp"



void stack::print()
{
    for (int i = 0; i < _top; i++)

        std::cout << _stack[i] << " ";
    std::cout << std::endl;
}



void stack::clear()
{
    _top = -1;
}



bool stack::full()
{
    if (_top == _size - 1)
        return (true);
    return (false);
}


int stack::top()
{
    return _stack[_top];
}



bool stack::empty()
{
    if (_top == -1)
        return true;
    return false;
}


int stack::pop()
{
    if (empty())
        return 0;
    int tmp = _stack[_top];
    _top--;
    return tmp;
}






void stack::push(int n)
{
    if (full())
        return;
    _stack[_top] = n;
    _top++;
}



stack::~stack()
{
    delete [] _stack;
}


stack::stack()
{
    _size = 10;
    _top = -1;
    _stack = new int[_size];
}