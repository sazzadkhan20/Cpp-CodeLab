#include<iostream>
using namespace std;

struct node
{
    int data ;
    node* leftChild;
    node* rightChild;
};

node* insert_node(node* root, int value)
{
    node* newNode = new node;
    if(root==0)
    {
        root = newNode;
        newNode->data = value;
        newNode->leftChild = NULL;
        newNode->rightChild =  NULL;
        return root;
    }
    if(root->data>value)
    {
        root->leftChild = insert_node(root->leftChild,value);
    }
    else if(root->data<value)
    {
        root->rightChild = insert_node(root->rightChild,value);
    }
    else
    {
        cout<<"Duplicate Value not allowed\n\n";
    }
    return root;
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

bool searching(node * root,int value)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data == value)
    {
        return true;
    }
    else if(root->data>value)
    {
        return searching(root->leftChild,value);
    }
    else
    {
        return searching(root->rightChild,value);
    }
}

node * inorder_successor(node * root)
{
    while(root->leftChild != NULL)
    {
        root = root->leftChild;
    }
    return root;
}

node* node_delete(node* root,int val)
{
    if(root->data>val)
    {
        root->leftChild = node_delete(root->leftChild,val);
    }
    else if(root->data<val)
    {
        root->rightChild = node_delete(root->rightChild,val);
    }
    else
    {
        //root->data == val
        //Case-1
        if(root->leftChild == NULL && root->rightChild == NULL)
        {
            return NULL;
        }
        //Case-2
        else if(root->leftChild == NULL)
        {
           return root->rightChild;
        }
        else if(root->rightChild == NULL)
        {
           return root->leftChild;
        }
        //Case-3
        node* IS = inorder_successor(root->rightChild);
        root->data = IS->data;
        root->rightChild = node_delete(root->rightChild,IS->data);
    }
    return root;
}


int main()
{
   node* root = NULL;
   root = insert_node(root,10);
   root = insert_node(root,8);
   root = insert_node(root,25);
   root = insert_node(root,3);
   root = insert_node(root,3);
   root = insert_node(root,30);
   root = insert_node(root,45);
   root = insert_node(root,1);
   root = insert_node(root,20);
   root = insert_node(root,15);
   root = insert_node(root,17);
   if(searching(root,20))
   {
       cout<<1<<endl;
   }
   else
   {
       cout<<0<<endl;
   }
   inorder_traversal(root);
   cout<<endl<<endl;
   root = node_delete(root,10);
   inorder_traversal(root);
}
