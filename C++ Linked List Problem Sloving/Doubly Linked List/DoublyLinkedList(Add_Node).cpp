 #include<iostream>

using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

void add_node_at_tail_doubly_linkedList(node* &head,node* &tail,int data)
{
    node* newNode = new node;
    if(head==NULL)
    {
       head = newNode;
       tail = newNode;
       newNode->data = data;
       newNode->prev = NULL;
       newNode->next = NULL;
       return;
    }
   /*node* temp = head;

   while(temp->next!=NULL)
   {
       temp = temp->next;
   }
   temp->next = newNode;
   //tempNextNode->prev = tempPrevNode;
   tail = temp->next;
   newNode->data = data;
   newNode->prev = temp;
   newNode->next = NULL;*/

   //Another Process---
   tail->next = newNode;
   newNode->data = data;
   newNode->prev = tail;
   newNode->next = NULL;
   tail = newNode;

}

/*void delete_node(node* &head,node* &tail,int searchingData)
{
    if(head==0)
    {
        cout<<"Linked List Empty\n\n";
        return;
    }
    node* temp = head;
    bool flag = false;

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
       if(head->next==NULL)
       {
           head = NULL;
           tail = NULL;
           delete temp;
           return;
       }
       if(head->data==searchingData)
       {
           head->next->prev = NULL;
           head = head->next;
           delete temp;
           return;
       }
       if(temp->next==NULL)
       {
           temp->prev->next = NULL;
           tail = temp->prev;
           delete temp;
           return;
       }
       temp->prev->next = temp->next;
       temp->next->prev = temp->prev;
       delete temp;
       return;
    }
    else
    {
        cout<<searchingData<<" Element not Found in Linked List\n\n";
        return;
    }
}
*/
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
        temp = temp->prev;
    }
    cout<<endl<<endl;
}

int main()
{
   node* head;
   node* tail;
   head = NULL;
   tail = NULL;
   display_node(head);
   display_node_at_reverse(head,tail);
   add_node_at_tail_doubly_linkedList(head,tail,5);
   //delete_node(head,tail,5);
   display_node(head);
   //display_node_at_reverse(head,tail);
   add_node_at_tail_doubly_linkedList(head,tail,10);
   display_node(head);
   //display_node_at_reverse(head,tail);
   add_node_at_tail_doubly_linkedList(head,tail,15);
   display_node(head);
   //delete_node(head,tail,5);
   //display_node_at_reverse(head,tail);
   add_node_at_tail_doubly_linkedList(head,tail,20);
   display_node(head);
  // display_node_at_reverse(head,tail);
   add_node_at_tail_doubly_linkedList(head,tail,25);
   display_node(head);
   //delete_node(head,tail,20);
   //display_node(head);
   display_node_at_reverse(head,tail);
}
