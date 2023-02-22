//Program to Delete nth Node of given Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void elements(int item)
{
    struct Node *newNode = (struct Node *)malloc (sizeof(struct Node));
    newNode->data = item;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

Node* removeNthFromEnd(Node* head, int n) 
{
        Node *newNode = new Node();
        newNode -> next = head;
        Node* temp1 = head;
        Node* temp2= head;     

        for(int i = 1; i <= n; ++i)
            temp1 = temp1->next;
    
        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
            temp2= temp2 ->next;
        }
        
        temp2 ->next = temp2 ->next->next;
        
        return head->next;
}
void display(struct Node *Node)
{
    while(Node != NULL)
    {
        cout<<Node->data<<" ";
        Node = Node->next;
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
    cout<<"Enter the position of Node from back to be deleted: ";
    cin>>n;
    if (n>=1 && n<=10)
    {
    
    removeNthFromEnd(head, n); 
    cout<<endl<<"New list after deletion of nth Node from back:\n";
    display(head);
    }
    else
    {
        cout<<"Deletion not posibble";
    }
    return 0;
}
    