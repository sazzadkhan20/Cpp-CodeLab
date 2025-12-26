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
    while(tempNode!=NULL)
    {
        if(tempNode->data==searchingData)
        {
            return tempPrevNode;
        }
        tempPrevNode = tempNode;
        tempNode = tempNode->next;
    }
    return NULL;
}

node* searching_node(node* head,int searchingData)
{
    node* tempNode = head;
    while(tempNode!=NULL)
    {
        if(tempNode->data==searchingData)
        {
            return tempNode;
        }
        tempNode = tempNode->next;
    }
    return NULL;
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
       newNode->next = head;
       head = newNode;
       return;
   }
    newNode->next = candidateNode;
    prevNode->next = newNode;

}

void add_node_at_trail_at_specific_node(node* newNode,node* candidateNode)
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
   if(candidateNode->next==NULL)
   {
       candidateNode->next = newNode;
       return;
   }
   newNode->next = candidateNode->next;
   candidateNode->next = newNode;
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
       return;
   }
   Node->next = head;
   head = Node;
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
      return;
   }
   node* temp = head;
   while(temp->next!=NULL)
   {
       temp = temp->next;
   }
   temp->next = Node;
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
       head = head->next;
       delete candidateNode;
       return;
   }
   if(candidateNode->next==NULL)
   {
       prevNode->next = NULL;
       delete candidateNode;
       return;
   }
   prevNode->next = candidateNode->next;
   delete candidateNode;
}

int length_of_linkedList(node * head)
{
    int length = 0;
    node* temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        length++;
    }
    return length;
}

void append_last_k_node_at_first(node* &head,int k)
{
    if(length_of_linkedList(head)<=k)
    {
        return;
    }
    int counter = length_of_linkedList(head) - k;
    node* newHead = head;
    node* newTail = head;

    while(counter!=0)
    {
        newTail = newHead;
        newHead = newHead->next;
        counter--;
    }

    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head = newHead;
    newTail->next = NULL;

}
void display_node(node* head)
{
    if(head==0)
    {
        cout<<"Linked List Empty\n\n";
        return;
    }
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
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
  add_node_at_beginning_at_specific_node(head,node_create(-5),searching_node(head,0),searching_previous_node(head,0));
  display_node(head);
  add_node_at_beginning_at_specific_node(head,node_create(-3),searching_previous_node(head,0),searching_node(head,0));
  display_node(head);
  add_node_at_beginning_at_specific_node(head,node_create(12),searching_previous_node(head,15),searching_node(head,15));
  display_node(head);
  add_node_at_trail_at_specific_node(node_create(-4),searching_node(head,-5));
  display_node(head);
  add_node_at_trail_at_specific_node(node_create(20),searching_node(head,15));
  display_node(head);
  add_node_at_trail_at_specific_node(node_create(11),searching_node(head,10));
  display_node(head);
  append_last_k_node_at_first(head,9);
  display_node(head);
  //cout<<length_of_linkedList(head)<<endl;

  /*node_delete(head,searching_previous_node(head,-5),searching_node(head,-5));
  display_node(head);
  node_delete(head,searching_previous_node(head,20),searching_node(head,20));
  display_node(head);
  node_delete(head,searching_previous_node(head,12),searching_node(head,12));
  display_node(head);
  node_delete(head,searching_previous_node(head,-4),searching_node(head,7));
  display_node(head);*/
}
