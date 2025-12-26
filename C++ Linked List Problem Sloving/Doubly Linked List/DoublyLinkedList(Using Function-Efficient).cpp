#include<iostream>

using namespace std;

struct node
{
    int data;
    node * previous;
    node * next;
};

node * node_create(int data)
{
    node * newNode = new node;
    if(newNode==0)
    {
        cout<<"Could not create new Node\n\n";
        return NULL;
    }
    newNode->data = data;
    newNode->previous = NULL;
    newNode->next = NULL;

    return newNode;
}

node * searching_node(node* head,int searchingData)
{
    node * temp = head;
    while(temp!=NULL)
    {
        if(temp->data == searchingData)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void add_node_at_beginning(node * &head,node * &tail,node * newNode)
{
    if(newNode==0)
    {
        return;
    }
   if(head==NULL)
   {
       head = newNode;
       tail = newNode;
       return;
   }
   newNode->next = head;
   head->previous = newNode;
   head = newNode;
}

void add_node_at_beginning_at_specific_node(node * &head,node * newNode,node * candidateNode)
{
   if(newNode==0)
    {
        return;
    }
    if(candidateNode == NULL)
    {
        cout<<"Searching Node Not Found In Linked List\n\n";
        return;
    }
    if(candidateNode == head)
    {
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
        return;
    }
    newNode->next = candidateNode;
    candidateNode->previous->next = newNode;
    newNode->previous = candidateNode->previous;
    candidateNode->previous = newNode;
}

void add_node_at_tail_at_specific_node(node * &tail,node * newNode,node * candidateNode)
{
    if(newNode==0)
    {
        return;
    }
    if(candidateNode == NULL)
    {
        cout<<"Searching Node Not Found In Linked List\n\n";
        return;
    }
    if(candidateNode == tail)
    {
        newNode->previous = tail;
        tail->next = newNode;
        tail = newNode;
        return;
    }
    newNode->next = candidateNode->next;
    candidateNode->next->previous = newNode;
    candidateNode->next = newNode;
    newNode->previous = candidateNode;
}

void add_node_at_tail(node * &head,node * &tail,node * newNode)
{
    if(newNode==0)
    {
        return;
    }
   if(head==NULL)
   {
       head = newNode;
       tail = newNode;
       return;
   }
   node * temp = head;
   while(temp->next!=NULL)
   {
       temp = temp->next;
   }
   temp->next = newNode;
   tail = newNode;
   newNode->previous = temp;
}

void delete_node(node* &head,node* &tail,node* candidateNode)
{
   if(candidateNode == NULL)
    {
        cout<<"Searching Node Not Found In Linked List\n\n";
        return;
    }
    if(head==tail)
    {
        head = NULL;
        tail = NULL;
        delete candidateNode;
        return;
    }
    if(candidateNode == head)
    {
       head = head->next;
       head->previous = NULL;
       delete candidateNode;
       return;
    }
    if(candidateNode == tail)
    {
        tail = tail->previous;
        tail->next = NULL;
        delete candidateNode;
        return;
    }
    candidateNode->previous->next = candidateNode->next;
    candidateNode->next->previous = candidateNode->previous;
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
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}

void display_node_at_reverse(node* head,node* tail)
{
    if(head==0)
    {
        cout<<"Linked List Empty\n\n";
        return;
    }
    node* temp = tail;

    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->previous;
    }
    cout<<endl<<endl;
}
int main()
{
    node * head = NULL;
    node * tail = NULL;
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_beginning(head,tail,node_create(0));
    display_node(head);
    delete_node(head,tail,searching_node(head,0));
    display_node(head);
    add_node_at_tail(head,tail,node_create(05));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_tail(head,tail,node_create(10));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_beginning(head,tail,node_create(-5));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_beginning_at_specific_node(head,node_create(-10),searching_node(head,-5));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_beginning_at_specific_node(head,node_create(8),searching_node(head,10));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_beginning_at_specific_node(head,node_create(25),searching_node(head,22));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_tail_at_specific_node(tail,node_create(-15),searching_node(head,-5));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_tail_at_specific_node(tail,node_create(15),searching_node(head,10));
    display_node(head);
    display_node_at_reverse(head,tail);
    add_node_at_tail_at_specific_node(tail,node_create(25),searching_node(head,22));
    display_node(head);
    display_node_at_reverse(head,tail);
    delete_node(head,tail,searching_node(head,-15));
    display_node(head);
    display_node_at_reverse(head,tail);
    delete_node(head,tail,searching_node(head,15));
    display_node(head);
    display_node_at_reverse(head,tail);
    delete_node(head,tail,searching_node(head,22));
    display_node(head);
    display_node_at_reverse(head,tail);
    delete_node(head,tail,searching_node(head,-10));
    display_node(head);
    display_node_at_reverse(head,tail);
}
