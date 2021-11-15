#ifndef BST_HPP_
#define BST_HPP_

//@interface BST : NSObject
#include <iostream>
using namespace std;
namespace bst
{
    class BinarySearchTree
    {
        private:
            struct Node
            {
                int data;
                Node *left;
                Node *right;
                Node(int a) : data(a), left(nullptr), right(nullptr) {}
            };
            Node *root;
            int size;
        public:
            BinarySearchTree();
            ~BinarySearchTree();
            void insert(int);
            void remove(int);
            bool search(int);
            void clear();
            void print(Node* node);
            int size_();
    };
        
    
}


#include "bst.cpp"


#endif