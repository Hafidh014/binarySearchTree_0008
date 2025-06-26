#include <iostream>
using namespace std;

class node 
{
    public: 
        int info;
        node *leftchild;
        node *rightchild;

        //constructor for the node class 
        node()
        {
            leftchild = nullptr;
            rightchild = nullptr;
        }
};

class BinaryTree
{
    public:
    node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr;
    }

    void insert()
    {
        int x;
        cout << "masukan nilai: ";
        cin >> x;

        //step1: allocate memmory for the new  node 
        node *newNode = new node();

        // step2: assign value to the data filed of new node 
        newNode->leftchild = nullptr;

        // step3: make the left and right child of the new node point
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        
}