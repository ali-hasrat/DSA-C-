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
void delete_nth_node(int key)
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
    cout<<endl;

    int n;
    cout<<"Enter the position of Node to be deleted: ";
    cin>>n;
    if (n>=1 && n<=10)
    {
    delete_nth_node(n);
    cout<<endl<<"New list after deletion of nth Node:\n";
    display(head);
    }
    else
    {
        cout<<"Deletion not posibble";

    }
    return 0;
}
    