#include<iostream>
#include<iomanip>

using namespace std;

struct node
{
    int data;
    node * next;
};

node* node_create(int data)
{
   node * newNode = new node;
   if(newNode==NULL)
   {
       cout<<"Could not Create New Node\n\n";
       return NULL;
   }
   newNode->data = data;
   newNode->next = NULL;
   return newNode;
}

node* searching_previous_node(node* head,int searchingData)
{
    node* tempNode = head;
    node* tempPrevNode = head;
    do{
        if(tempNode->data==searchingData)
        {
            return tempPrevNode;
        }
        tempPrevNode = tempNode;
        tempNode = tempNode->next;
    }
    while(tempNode!=head);

    return NULL;
}

node* searching_node(node* head,int searchingData)
{
   node* tempNode = head;
    do{
        if(tempNode->data==searchingData)
        {
            return tempNode;
        }
        tempNode = tempNode->next;
    }
    while(tempNode!=head);

    return NULL;
}

void add_node_at_beginning(node* &head,node* Node)
{
   if(Node==NULL)
   {
       return;
   }
   if(head==NULL)
   {
       head = Node;
       Node->next = head;
       return;
   }
   node* temp = head;
   while(temp->next!=head)
   {
       temp = temp->next;
   }
   Node->next = head;
   temp->next = Node;
   head = Node;
}

void add_node_at_beginning_at_specific_node(node* &head,node* newNode,node* prevNode,node* candidateNode)
{
    if(newNode==NULL)
    {
        return;
    }
    if(prevNode==NULL || candidateNode==NULL)
    {
        cout<<"Searching Node Not Found In Linked List\n\n";
        return;
    }
   if(prevNode==candidateNode)
   {
       add_node_at_beginning(head,newNode);
       return;
   }
    newNode->next = candidateNode;
    prevNode->next = newNode;

}

void add_node_at_trail_at_specific_node(node* &head,node* newNode,node* candidateNode)
{
    if(newNode==NULL)
    {
        return;
    }
    if(candidateNode==NULL)
    {
        cout<<"Searching Node Not Found In Linked List\n\n";
        return;
    }
   if(candidateNode->next==head)
   {
       candidateNode->next = newNode;
       newNode->next = head;
       return;
   }
   newNode->next = candidateNode->next;
   candidateNode->next = newNode;
}


void add_node_at_tail_in_linkedList(node* &head,node* Node)
{
    if(Node==NULL)
    {
        return;
    }
   if(head==NULL)
   {
      head = Node;
      head->next = head;
      return;
   }
   node* temp = head;
   while(temp->next!=head)
   {
       temp = temp->next;
   }
   temp->next = Node;
   Node->next = head;
}

void node_delete(node* &head,node* prevNode,node* candidateNode)
{
   if(candidateNode==NULL || prevNode==NULL)
   {
      cout<<"Searching Node Not Found In Linked List\n\n";
      return;
   }
   if(candidateNode==prevNode)
   {
       node* temp = head;
      while(temp->next!=head)
      {
       temp = temp->next;
      }
       temp->next = head->next;
       head = head->next;
       delete candidateNode;
       return;
   }
   if(candidateNode->next==NULL)
   {
       prevNode->next = head;
       delete candidateNode;
       return;
   }
   prevNode->next = candidateNode->next;
   delete candidateNode;
}

void display_node(node* head)
{
    if(head==0)
    {
        cout<<"Linked List Empty\n\n";
        return;
    }
    node* temp = head;

    do{
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    while(temp!=head);
    /*while(temp->next!=head)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<temp->data<<"  ";*/
    cout<<endl<<endl;
}

int main()
{
   node* head = NULL;
   display_node(head);
   add_node_at_tail_in_linkedList(head,node_create(5));
   display_node(head);
   add_node_at_tail_in_linkedList(head,node_create(10));
   display_node(head);
   add_node_at_tail_in_linkedList(head,node_create(15));
   display_node(head);
   add_node_at_beginning(head,node_create(0));
   display_node(head);
   add_node_at_beginning(head,node_create(-5));
   display_node(head);
   add_node_at_beginning_at_specific_node(head,node_create(-10),searching_previous_node(head,-5),searching_node(head,-5));
   display_node(head);
   add_node_at_beginning_at_specific_node(head,node_create(12),searching_previous_node(head,15),searching_node(head,15));
   display_node(head);
   add_node_at_trail_at_specific_node(head,node_create(20),searching_node(head,15));
   display_node(head);
   add_node_at_trail_at_specific_node(head,node_create(20),searching_node(head,25));
   display_node(head);
   node_delete(head,searching_previous_node(head,-10),searching_node(head,-10));
   display_node(head);
   node_delete(head,searching_previous_node(head,20),searching_node(head,20));
   display_node(head);
   node_delete(head,searching_previous_node(head,12),searching_node(head,12));
   display_node(head);
}
