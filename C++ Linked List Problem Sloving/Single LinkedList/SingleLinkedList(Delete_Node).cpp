#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

void add_node_at_trail(node* &head,int data)
{
    node * newNode = new node;
    if(head==NULL)
    {
        head = newNode;
        newNode->data = data;
        newNode->next = NULL;
        return;
    }
    node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = data;
    newNode->next = NULL;
}
void delete_node(node* &head,int searchingData)
{
  if(head==0)
  {
      cout<<"Linked List Empty\n\n";
      return;
  }
  bool flag = false;
  node * temp = head;
  node * tempNode = head;
  while(temp!=NULL)
  {
      if(temp->data==searchingData)
      {
          flag = true;
          break;
      }
      tempNode = temp;
      temp = temp->next;
      //tempNode = temp->next;
  }
  if(flag)
  {
      if(temp==tempNode)
      {
          head = head->next;
          delete temp;
          return;
      }
      if(temp->next==NULL)
      {
          tempNode->next = NULL;
          delete temp;
          return;
      }
      tempNode->next = temp->next;
      delete temp;
      return;
  }
  else
  {
      cout<<"Element Not Found in Linked List\n\n";
  }
}
void display_node(node* head)
{
   node * temp = head;
   if(temp==0)
   {
       cout<<"Linked List Empty\n\n";
       return;
   }
   cout<<"Linked List Elements are: ";
   while(temp!= NULL)
   {
       cout<<temp->data<<"  ";
       temp = temp->next;
   }
   cout<<endl<<endl;
}

int main()
{
   node * head;
   head = NULL;
   display_node(head);
   add_node_at_trail(head,10);
   display_node(head);
   add_node_at_trail(head,20);
   display_node(head);
   add_node_at_trail(head,30);
   display_node(head);
   add_node_at_trail(head,40);
   display_node(head);
   add_node_at_trail(head,50);
   display_node(head);
   add_node_at_trail(head,60);
   display_node(head);
   //delete_node(head,10);
   //display_node(head);
   delete_node(head,10);
   display_node(head);
   delete_node(head,60);
   display_node(head);
   delete_node(head,40);
   display_node(head);
   delete_node(head,20);
   display_node(head);
   delete_node(head,50);
   display_node(head);
   delete_node(head,30);
   display_node(head);
   delete head;
}
