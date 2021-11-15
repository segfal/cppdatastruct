#ifndef QUEUE_HPP_
#define QUEUE_HPP_


#include <iostream>

class queue
{
    public:
        queue();
        ~queue();
        void push(int);
        int pop();
        int top();
        bool empty();
        bool full();
        void clear();
        void print();
    private:
        int *_queue;
        int _top;
        int _size;

};

void queue::clear()
{
    _top = -1;
}



int queue::top()
{
    return _queue[_top];
}



void queue::push(int n)
{
    if (full())
        return;
    _queue[_top] = n;
    _top++;
}




void queue::print()
{
    for (int i = 0; i < _top; i++)

        std::cout << _queue[i] << " ";
    std::cout << std::endl;
}


queue::~queue()
{
    delete[] _queue;
}

queue::queue()
{
    _size = 10;
    _queue = new int[_size];
    _top = -1;
}




#endif