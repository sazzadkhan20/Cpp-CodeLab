#include<iostream>

using namespace std;

struct node
{
   int data;
   node * leftChild;
   node * rightChild;
};

node* binary_tree_create()
{
    node * newNode = new node;
    if(newNode==0)
    {
        return 0;
    }
    int x;
    cout<<"Enter Data(if use -1 then null will be assign): ";
    cin>>x;
    if(x == -1)
    {
        return NULL;
    }
    newNode->data = x;
    cout<<x<<endl;
    newNode->leftChild = binary_tree_create();
    cout<<x<<endl;
    newNode->rightChild = binary_tree_create();
    return newNode;
}

void preorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    preorder_traversal(root->leftChild);
    preorder_traversal(root->rightChild);
}
void inorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder_traversal(root->leftChild);
    cout<<root->data<<"  ";
    inorder_traversal(root->rightChild);
}

void postorder_traversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder_traversal(root->leftChild);
    postorder_traversal(root->rightChild);
    cout<<root->data<<"  ";
}

int main()
{
    node * rootNode = NULL;
    rootNode = binary_tree_create();
    //cout<<rootNode->data<<endl;
    cout<<"Preorder : ";
    preorder_traversal(rootNode);
    cout<<endl<<endl<<"Inorder: ";
    inorder_traversal(rootNode);
    cout<<endl<<endl<<"Postorder: ";
    postorder_traversal(rootNode);
}
