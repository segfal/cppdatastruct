#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include <iostream>


namespace linkedlist
{
    class SinglyLinkedList
    {
        private:
            struct Node
            {
                int data;
                Node *next;
                Node(int a) : data(a), next(nullptr) {}
            };
            Node *head;
            Node *tail;
            int size;
        public:
            SinglyLinkedList();
            ~SinglyLinkedList();
            void push_back(int);
            void push_front(int);
            int pop_back();
            int pop_front();
            int front();
            int back();
            void print();
            void clear();
            bool empty();
            int size_();
    };




    class DoublyLinkedList
    {
        private:
            struct Node
            {
                int data;
                Node *next;
                Node *prev;
                Node(int a) : data(a), next(nullptr), prev(nullptr) {}
            };
            Node *head;
            Node *tail;
            int size;
        public:
            DoublyLinkedList();
            ~DoublyLinkedList();
            void push_back(int);
            void push_front(int);
            int pop_back();
            int pop_front();
            int front();
            int back();
            void print();
            void clear();
            bool empty();
            int size_();
    };

 

    
}


#include "linkedlist.cpp"




#endif