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
    
}