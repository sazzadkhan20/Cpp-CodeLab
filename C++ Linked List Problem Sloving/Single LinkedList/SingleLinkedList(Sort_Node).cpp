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
  while(temp->next!=NULL)
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
  if(!flag && temp->data==searchingData)
  {
      flag = true;
  }
  if(flag)
  {
      if(head->next==NULL)
      {
          head = NULL;
          return;
      }
      if(head->data == searchingData)
      {
          head = head->next;
          return;
      }
      if(temp->next==NULL)
      {
          tempNode->next = NULL;
          //cout<<"I am Working\n\n";
          return;
      }
      tempNode->next = temp->next;
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
   while(temp->next!= NULL)
   {
       cout<<temp->data<<"  ";
       temp = temp->next;
   }
   cout<<temp->data<<endl<<endl;
}

/*int max_element_in_linkedList(node* head)
{
    if(head==0)
    {
        return 0;
    }
    int maxValue = head->data;
    node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        if(maxValue<temp->data)
        {
            maxValue = temp->data;
        }
    }
    if(maxValue<temp->data)
    {
        maxValue = temp->data;
    }
    return maxValue;
}*/


//Selection Sort
void sorted_linkedList(node* head)
{
    if(head==0)
    {
        return;
    }
    node * temp1 = head;
    node * temp2;
    node* minNode;
    while(temp1->next!=NULL)
    {
        minNode = temp1;
        temp2 = temp1;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
            if((minNode->data)>(temp2->data))
            {
                minNode = temp2;
            }
        }
        if(minNode->data>temp2->data)
            {
                minNode = temp2;
            }
            int value = temp1->data;
            temp1->data = minNode->data;
            minNode->data = value;
            temp1 = temp1->next;
    }
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
   add_node_at_trail(head,23);
   display_node(head);
   add_node_at_trail(head,1);
   display_node(head);
   add_node_at_trail(head,-45);
   display_node(head);
   add_node_at_trail(head,88);
   display_node(head);
   add_node_at_trail(head,15);
   display_node(head);
   add_node_at_trail(head,15);
   display_node(head);
   sorted_linkedList(head);
   display_node(head);
   //cout<<"Maximum Value In LinkedList is: "<<max_element_in_linkedList(head)<<"\n\n";
}


