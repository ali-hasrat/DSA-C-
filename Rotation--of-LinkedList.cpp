//Program to rotate a linked list
#include<iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;
};

Node *rotate(Node *head, int k) 
{
    if(head == NULL) {
        return head;
    }
    
    int len = 1;
    Node *temp = head;
        
    while(temp->next != NULL)
    {
        temp = temp->next;
        len += 1;
    }
    
    if(len < k) 
    {
        k = k % len;
    }

    k = len - k;

    if(k == len || k == 0) 
    {
        return head;
    }

    int count = 1;
    Node *current = head;

    while(count < k && current != NULL) 
    {
        current = current->next;
        count += 1;
    }

    if(current == NULL) 
    {
        return head;
    }

    temp->next = head;
    head = current->next;
    current->next = NULL;
    return head;
}

void push(Node ** head,int data)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=(*head);
    (*head)=temp;
}

void display(Node* head)
{
    while(head!=NULL)
  {
    cout<<head->data<<" " ;
    head=head->next;
  }
  cout<<endl;
}

int main()
{
  Node* head=NULL;

  push(&head,5);
  push(&head,4);
  push(&head,3);
  push(&head,2);
  push(&head,1);
  
  cout<<"Original linked list \n";
  display(head);

  head=rotate(head,4);
  cout<<"Linked list after rotation \n";
  display(head);
  return 0;
}