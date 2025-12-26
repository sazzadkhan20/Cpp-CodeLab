
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

void create_intersection_of_two_linkedList(node* &firstHead,node* &secondHead,node* Node)
{
    add_node_at_tail_in_linkedList(firstHead,Node);
    add_node_at_tail_in_linkedList(secondHead,Node);
}

int find_intersection_point(node* &firstHead,node* &secondHead)
{
    int l1 = length_of_linkedList(firstHead);
    int l2 = length_of_linkedList(secondHead);
    int counter;
    node* temp1 = firstHead;
    node* temp2 = secondHead;
    if(l1>l2)
    {
        counter = l1-l2;
        while(counter!=0 && temp1!=NULL)
        {
            counter--;
            temp1 = temp1->next;
        }
    }
    else
    {
        counter = l2-l1;
        while(counter!=0 && temp2!=NULL)
        {
            counter--;
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return 0;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}

int find_intersection_point_data(node* &firstHead,node* &secondHead)
{
    if(find_intersection_point(firstHead,secondHead)==0)
    {
    int l1 = length_of_linkedList(firstHead);
    int l2 = length_of_linkedList(secondHead);
    int counter;
    node* temp1 = firstHead;
    node* temp2 = secondHead;
    if(l1>l2)
    {
        counter = l1-l2;
        while(counter!=0 && temp1!=NULL)
        {
            counter--;
            temp1 = temp1->next;
        }
    }
    else
    {
        counter = l2-l1;
        while(counter!=0 && temp2!=NULL)
        {
            counter--;
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    }
    return 0;
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
  add_node_at_tail_in_linkedList(firstHead,node_create(2));
  add_node_at_tail_in_linkedList(firstHead,node_create(3));
  add_node_at_tail_in_linkedList(secondHead,node_create(8));
  add_node_at_tail_in_linkedList(secondHead,node_create(9));
  add_node_at_tail_in_linkedList(firstHead,node_create(4));
  //add_node_at_beginning(firstHead,node_create(5));
  create_intersection_of_two_linkedList(firstHead,secondHead,node_create(5));
  display_node(firstHead);
  //add_node_at_tail_in_linkedList(firstHead,node_create(5));
  add_node_at_tail_in_linkedList(firstHead,node_create(6));
  add_node_at_tail_in_linkedList(firstHead,node_create(7));
  display_node(firstHead);
  display_node(secondHead);
  //cout<<find_intersection_point(firstHead,secondHead);
  cout<<"Intersection Data is : "<<find_intersection_point_data(firstHead,secondHead)<<endl<<endl;;
}
