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

        // step4: locate the node wich will be the parent of the node 
        node *parent = nullptr;
        node *currendNode = nullptr;
        search(x, parent, currentNode);

        // step5: if parent is null (tree is empety)
        if (parrent == nullptr)
        {
            //5a: mark the new node as root 
            ROOT = newNode;

            //5b: exit 
            return;
        }

        //step6: if te vallue in the data filled of 
        // new node is less then of parrent
        if (x < parrent->info)
        {
            //6a: make the left and right child of the new node point
            parent->leftchild = newNode;
            return;

            //6b: exit 
        }

        //step 7: if the value in the data filed of the 
        //new node is greather than that of the parrent 
        else if (x > parrent->info)
        {
            //7a :make the left and right child of the new node point
            parent->rightchild  = newNode;
            //7b: exit 
            return;
        }
    }

    void search(int element, node *&parent, node *currentNode)
    {
        //this fonction searcher the currentnode of the specifield node ad
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode !=nullptr) &&(currentNode->info != element ))
        {
            parrent =currentNode;
            if (element < currentNode->leftchild->info)
                currentNode = currentNode->leftchild;
            else currentNode = currentNode->rightchild;
        }
void insert() {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;

        node *parent, *currentNode;
        search(x, parent, currentNode);

        // Cegah duplikat
        if (currentNode != nullptr) {
            cout << "Nilai sudah ada di dalam tree.\n";
            return;
        }

        // Step 1 & 2: Buat dan isi nilai ke newNode
        node *newNode = new node();
        newNode->info = x;

        if (parent == nullptr) {
            ROOT = newNode;
            return;
        }

        if (x < parent->info)
            parent->leftchild = newNode;
        else
            parent->rightchild = newNode;
    }

    void inorder(node *ptr) {
        if (isEmpty()) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
            return;

        inorder(ptr->leftchild);
        cout << ptr->info << " ";
        inorder(ptr->rightchild);
    }    

    }
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
};