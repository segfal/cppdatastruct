#include "bst.hpp"
using namespace bst;



    //@implementation BST
    BinarySearchTree::BinarySearchTree() : root(nullptr), size(0) {}
    BinarySearchTree::~BinarySearchTree() { clear(); }
    void BinarySearchTree::insert(int a)
    {
        if (root == nullptr)
        {
            root = new Node(a);
            size++;
            return;
        }
        Node *curr = root;
        while (curr != nullptr)
        {
            if (a < curr->data)
            {
                if (curr->left == nullptr)
                {
                    curr->left = new Node(a);
                    size++;
                    return;
                }
                curr = curr->left;
            }
            else if (a > curr->data)
            {
                if (curr->right == nullptr)
                {
                    curr->right = new Node(a);
                    size++;
                    return;
                }
                curr = curr->right;
            }
            else
            {
                return;
            }
        }
    }


    void BinarySearchTree::remove(int a)
    {
        if (root == nullptr)
        {
            return;
        }
        Node *curr = root;
        Node *parent = nullptr;
        while (curr != nullptr)
        {
            if (a < curr->data)
            {
                parent = curr;
                curr = curr->left;
            }
            else if (a > curr->data)
            {
                parent = curr;
                curr = curr->right;
            }
            else
            {
                if (curr->left == nullptr && curr->right == nullptr)
                {
                    if (parent == nullptr)
                    {
                        root = nullptr;
                    }
                    else if (parent->left == curr)
                    {
                        parent->left = nullptr;
                    }
                    else
                    {
                        parent->right = nullptr;
                    }
                    delete curr;
                    size--;
                    return;
                }
                else if (curr->left == nullptr)
                {
                    if (parent == nullptr)
                    {
                        root = curr->right;
                    }
                    else if (parent->left == curr)
                    {
                        parent->left = curr->right;
                    }
                    else
                    {
                        parent->right = curr->right;
                    }
                    delete curr;
                    size--;
                    return;
                }
                else if (curr->right == nullptr)
                {
                    if (parent == nullptr)
                    {
                        root = curr->left;
                    }
                    else if (parent->left == curr)
                    {
                        parent->left = curr->left;
                    }
                    else
                    {
                        parent->right = curr->left;
                    }
                    delete curr;
                    size--;
                    return;
                }
                else
                {
                    Node *temp = curr->right;
                    while (temp->left != nullptr)
                    {
                        temp = temp->left;
                    }
                    curr->data = temp->data;
                    remove(temp->data);
                }
            }

        }
    }

    void BinarySearchTree::clear()
    {
        if (root == nullptr)
        {
            return;
        }
        Node *curr = root;
        Node *parent = nullptr;
        while (curr != nullptr)
        {
            if (curr->left == nullptr && curr->right == nullptr)
            {
                if (parent == nullptr)
                {
                    root = nullptr;
                }
                else if (parent->left == curr)
                {
                    parent->left = nullptr;
                }
                else
                {
                    parent->right = nullptr;
                }
                delete curr;
                curr = nullptr;
                size--;
            }
            else if (curr->left == nullptr)
            {
                if (parent == nullptr)
                {
                    root = curr->right;
                }
                else if (parent->left == curr)
                {
                    parent->left = curr->right;
                }
                else
                {
                    parent->right = curr->right;
                }
                delete curr;
                curr = nullptr;
                size--;
            }
            else if (curr->right == nullptr)
            {
                if (parent == nullptr)
                {
                    root = curr->left;
                }
                else if (parent->left == curr)
                {
                    parent->left = curr->left;
                }
                else
                {
                    parent->right = curr->left;
                }
                delete curr;
                curr = nullptr;
                size--;
            }
            else
            {
                Node *temp = curr->right;
                while (temp->left != nullptr)
                {
                    temp = temp->left;
                }
                curr->data = temp->data;
                remove(temp->data);
            }

        }
    }


    bool BinarySearchTree::search(int a)
    {
        if (root == nullptr)
        {
            return false;
        }
        Node *curr = root;
        while (curr != nullptr)
        {
            if (a < curr->data)
            {
                curr = curr->left;
            }
            else if (a > curr->data)
            {
                curr = curr->right;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

    void BinarySearchTree::print(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        print(node->left);
        cout << node->data << " ";
        print(node->right);
    }

    
           