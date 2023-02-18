//Program to Delete first, last and at given position Node of given Linked List
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void elements(int item)
{
    struct node *newnode = (struct node *)malloc (sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void deleteAtPos(int key)
    {
        struct node *temp=head;
        struct node *prev=NULL;
        if(temp !=NULL && temp->data==key)
        {
            head=temp->next;
            return;
        }
        while(temp!=NULL && temp->data!=key)
        {
            prev=temp;
            temp=temp->next;

        }
        if(temp==NULL)
            return;
        prev->next=temp->next;
    }
void deleteAtFront()
{
    struct node *temp = head;
    head = head->next ;
    temp->next = NULL;
    free(temp);
}
void deleteAtEnd()
{
    struct node *temp1 = head;
    struct node *temp2 = NULL;
    while(temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    free(temp1);
}
void display(struct node *node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<"\n";
}
int main()
{
    for(int i=10;i>=1;i--)
    {
        elements(i);
    }
    cout<<"Elements of list are : \n";
    display(head);

    cout<<"New list after deletion at Position:\n";
    deleteAtPos(4);
    display(head);

    cout<<"New list after deletion at Front:\n";
    deleteAtFront();
    display(head);

    cout<<"New list after deletion at end :\n";
    deleteAtEnd();
    display(head);
    return 0;
}
    