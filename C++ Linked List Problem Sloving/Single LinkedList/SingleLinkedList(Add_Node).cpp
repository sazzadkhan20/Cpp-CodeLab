#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

void add_node_at_beginning_at_specific_data(node* &head,int searchingData,int data)
{
    bool flag = false;
    node* newNode = new node;
    if(head==NULL)
   {
      head = newNode;
      newNode->data=data;
      newNode->next = NULL;
      return;
   }
    node* temp = head;
    node* tempNode = head;
    //Searching Element
    while(temp->next!=NULL)
    {
        if(temp->data==searchingData)
        {
            flag = true;
            break;
        }
        tempNode = temp;
        temp = temp->next;
    }
    if(!flag && temp->data==searchingData)
    {
        flag = true;
    }
    if(flag)
    {
        if(head->data==searchingData)
        {
            node* tempNode = head;
            head = newNode;
            newNode->data = data;
            newNode->next = tempNode;
            return;
        }
        tempNode->next = newNode;
        newNode->data = data;
        newNode->next = temp;
        return;
    }
}

void add_node_at_trail_at_specific_data(node* &head,int searchingData,int data)
{
    bool flag = false;
    node* newNode = new node;
    if(head==NULL)
   {
      head = newNode;
      newNode->data=data;
      newNode->next = NULL;
      return;
   }
    node* temp = head;
    //Searching Element
    while(temp->next!=NULL)
    {
        if(temp->data==searchingData)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if(!flag && temp->data==searchingData)
    {
        flag = true;
    }
    if(flag)
    {
        if(temp->next==NULL)
        {
            temp->next = newNode;
            newNode->data = data;
            newNode->next = NULL;
            return;
        }
       node* tempNode = temp->next;
       temp->next = newNode;
       newNode->data = data;
       newNode->next = tempNode;
    }
}

void add_node_at_beginning(node* &head,int data)
{
   node *newNode = new node;
   if(head==NULL)
   {
       head = newNode;
       newNode->data= data;
       newNode->next = NULL;
       return;
   }
   node* temp = head;
   head = newNode;
   newNode->data = data;
   newNode->next = temp;

}

void add_node_at_middle(node* &head,int searchingData,int data)
{
    bool flag = false;
    node* newNode = new node;
    node* temp = head;
    while(temp->next!=NULL)
    {
        if(temp->data==searchingData)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if(!flag && temp->data==searchingData)
    {
        flag = true;
    }
    if(flag)
    {
        node* temp1 = temp->next;
        temp->next = newNode;
        newNode->data = data;
        newNode->next = temp1;

    }

}
//One Process---
void add_node_at_trail(node* &head,int data)
{
    //cout<<&head<<endl;
   node *newNode = new node;
   if(head==NULL)
   {
      head = newNode;
      newNode->data=data;
      newNode->next = NULL;
      return;
   }
   node *temp = head;
   while(temp->next!=NULL)
   {
       temp=temp->next;
   }
   temp->next = newNode;
   newNode->data = data;
   newNode->next = NULL;
}
//Another Process--
/*void add_node_at_trail(node** head,int data)
{
    //cout<<&head<<endl;
   node *newNode = new node;
   if(*head==NULL)
   {
      *head = newNode;
      newNode->data=data;
      newNode->next = NULL;
      return;
   }
}*/
void node_display(node * head)
{
    if(head==0)
    {
        cout<<"Linked List Empty\n\n";
        return;
    }
    cout<<"Linked List Elements are: ";
    node *temp = head;
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
    //cout<<temp->data<<"  ";
    cout<<endl<<endl;
}

int main()
{
    node *head = new node;
    //cout<<head<<endl;
    head = NULL;
    node_display(head);
    //cout<<&head<<endl;
    add_node_at_trail_at_specific_data(head,2,0);
    node_display(head);
    add_node_at_trail(head,10);
    node_display(head);
    add_node_at_trail(head,20);
    node_display(head);
    add_node_at_trail(head,30);
    node_display(head);
    add_node_at_trail(head,40);
    node_display(head);
    add_node_at_beginning(head,05);
    node_display(head);
    add_node_at_middle(head,20,25);
    node_display(head);
    add_node_at_middle(head,45,25);
    node_display(head);
    for(int i=1; i<=5; i++)
    {
        add_node_at_trail(head,i*50);
    }
    node_display(head);
    add_node_at_trail_at_specific_data(head,250,300);
    node_display(head);
    add_node_at_trail_at_specific_data(head,40,45);
    node_display(head);
    add_node_at_beginning_at_specific_data(head,100,80);
    node_display(head);
    delete head;
}
