
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

void sorted_linkedList(node* head)
{
    if(head==0)
    {
        return;
    }
    node * temp = head;
    int data;
    node* dataNode;
    node* minNode;
    while(temp!=NULL)
    {
        data = temp->data;
        dataNode = temp->next;
        minNode = temp;
        while(dataNode!=NULL)
        {
            if(dataNode->data<data)
            {
                data = dataNode->data;
                minNode = dataNode;
            }
            dataNode = dataNode->next;
        }
        minNode->data = temp->data;
        temp->data = data;
        temp = temp->next;
    }
}

node* merge_two_sorted_linkedList(node * firstHead,node * secondHead)
{
    if(firstHead==0 && secondHead==0)
    {
        return NULL;
    }
    node* dummyNode = node_create(-1);
    node* temp = dummyNode;
    node* temp1 = firstHead;
    node* temp2 = secondHead;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            temp->next = temp1;
            temp1 = temp1->next;
        }
        else if(temp1->data>temp2->data)
        {
            temp->next = temp2;
            temp2 = temp2->next;
        }
        else
        {
            temp->next = temp1;
            temp1 = temp1->next;
            temp = temp->next;
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    while(temp1!=NULL)
    {
        temp->next = temp1;
        temp1 = temp1->next;
        temp = temp->next;
    }
    while(temp2!=NULL)
    {
        temp->next = temp2;
        temp2 = temp2->next;
        temp = temp->next;
    }
    node* result = dummyNode->next;
    delete dummyNode;
    return result;
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
  node* firstHead = NULL;
  node* secondHead = NULL;
  display_node(firstHead);
  add_node_at_tail_in_linkedList(firstHead,node_create(1));
  add_node_at_tail_in_linkedList(firstHead,node_create(-12));
  add_node_at_tail_in_linkedList(firstHead,node_create(25));
  add_node_at_tail_in_linkedList(firstHead,node_create(1));
  add_node_at_tail_in_linkedList(firstHead,node_create(255));
  add_node_at_tail_in_linkedList(firstHead,node_create(10));
  add_node_at_tail_in_linkedList(firstHead,node_create(9));
  add_node_at_tail_in_linkedList(firstHead,node_create(22));
  add_node_at_tail_in_linkedList(secondHead,node_create(8));
  add_node_at_tail_in_linkedList(secondHead,node_create(-22));
  add_node_at_tail_in_linkedList(secondHead,node_create(7));
  add_node_at_tail_in_linkedList(secondHead,node_create(78));
  add_node_at_tail_in_linkedList(secondHead,node_create(29));
  add_node_at_tail_in_linkedList(secondHead,node_create(1));
  add_node_at_tail_in_linkedList(secondHead,node_create(56));
  add_node_at_tail_in_linkedList(firstHead,node_create(4));
  display_node(firstHead);
  display_node(secondHead);
  sorted_linkedList(firstHead);
  sorted_linkedList(secondHead);
  display_node(firstHead);
  display_node(secondHead);
  node * mergeHead = merge_two_sorted_linkedList(firstHead,secondHead);
  display_node(mergeHead);
  display_node(firstHead);
  display_node(secondHead);
}
