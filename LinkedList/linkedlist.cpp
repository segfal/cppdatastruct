#include "linkedlist.hpp"



using namespace linkedlist;
using namespace std;



    SinglyLinkedList::SinglyLinkedList() : head{nullptr} , tail{nullptr} , size{0} {}
    SinglyLinkedList::~SinglyLinkedList()
    {
        clear();
    }
    void SinglyLinkedList::clear()
    {
        while (head)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        tail = nullptr;
        size = 0;
    }

    void SinglyLinkedList::push_back(int n)
    {
        Node *tmp = new Node(n);
        if (empty())
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tmp;
        }
        size++;
    }

    void SinglyLinkedList::push_front(int n)
    {
        Node *tmp = new Node(n);
        if (empty())
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tmp->next = head;
            head = tmp;
        }
        size++;
    }


    int SinglyLinkedList::pop_back()
    {
        if (empty())
            return 0;
        Node *tmp = head;
        int ret = tail->data;
        if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            while (tmp->next != tail)
                tmp = tmp->next;
            tail = tmp;
            tail->next = nullptr;
        }
        delete tmp;
        size--;
        return ret;
    }

    int SinglyLinkedList::pop_front()
    {
        if (empty())
            return 0;
        int ret = head->data;
        Node *tmp = head;
        head = head->next;
        delete tmp;
        size--;
        return ret;
    }
    bool SinglyLinkedList::empty()
    {
        return (size == 0);
    }
    int SinglyLinkedList::size_()
    {
        return size;
    }
    int SinglyLinkedList::front()
    {
        if (empty())
            return 0;
        return head->data;
    }
    int SinglyLinkedList::back()
    {
        if (empty())
            return 0;
        return tail->data;
    }
    void SinglyLinkedList::print()
    {
        Node *tmp = head;
        while (tmp)
        {
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << std::endl;
    }







    

    DoublyLinkedList::DoublyLinkedList() : head{nullptr} , tail{nullptr} , size{0} {}
    DoublyLinkedList::~DoublyLinkedList()
    {
        clear();
    }
    void DoublyLinkedList::clear()
    {
        while (head)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        tail = nullptr;
        size = 0;
    }

    void DoublyLinkedList::push_back(int n)
    {
        Node *tmp = new Node(n);
        if (empty())
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tmp->prev = tail;
            tail = tmp;
        }
        size++;
    }

    void DoublyLinkedList::push_front(int n)
    {
        Node *tmp = new Node(n);
        if (empty())
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tmp->next = head;
            head->prev = tmp;
            head = tmp;
        }
        size++;
    }

    void DoublyLinkedList::print()
    {
        Node *tmp = head;
        while (tmp)
        {
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << std::endl;
    }





    int DoublyLinkedList::pop_back()
    {
        if (empty())
            return 0;
        Node *tmp = head;
        int ret = tail->data;
        if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            while (tmp->next != tail)
                tmp = tmp->next;
            tail = tmp;
            tail->next = nullptr;
        }
        delete tmp;
        size--;
        return ret;
    }


    bool DoublyLinkedList::empty()
    {
        return (size == 0);
    }