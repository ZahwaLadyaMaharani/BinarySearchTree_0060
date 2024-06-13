
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string element, Node* left, Node* right) {
        info = element;
        leftchild = left;
        rightchild = right;
    }
};
class BinaryTree {
public:
    Node* ROOT;

    BinaryTree() {
        ROOT = nullptr; //initializing ROOT to null
    }
    void search(string element, Node*& parent, Node*& currentNode) {
        //this function searches the currentNode of the specified Node as well as the current node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }
    void inorder(Node* ptr) {
        if (ROOT == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }
    void preorder(Node* ptr) {
        if (ROOT == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }
    void postorder(Node* ptr) {
        if (ROOT == nullptr) {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr != nullptr) {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }
};
int main() {
    BinaryTree x;
    while (true) {
        cout << "\nMenu" << endl;









  
