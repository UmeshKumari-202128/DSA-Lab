//Write a program to implement all the tree traversal methods using classes.
//Umesh Kumari - 202128; DSA Lab-13



#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

//PostOrder
void printPostorder(class Node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node -> data << " ";
}

// Inorder
void printInorder(class Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}
//PreOrder
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    cout <<node->data <<" ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    class Node* root = new Node(11);
    root->left = new Node(12);
    root->right = new Node(13);
    root->left->left = new Node(14);
    root->left->right = new Node(15);

    cout << "Preorder traversal of tree is ";
    printPreorder(root);

    cout << "\nInorder traversal of  tree is ";
    printInorder(root);

    cout << "\nPostorder traversal of tree is";
    printPostorder(root);

    return 0;
}
