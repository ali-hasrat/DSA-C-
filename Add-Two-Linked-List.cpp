//Program to Add two Linked List
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head, int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    if(*head == NULL)
    {
        *head = newnode;
    }
    else{
        newnode->next = *head;
        *head = newnode;
    }
}
Node* addLinkedlist(Node* a, Node* b)
{
    Node* head = new Node();
    Node* current = head;
    int carry = 0;
    while(a != NULL || b != NULL || carry)
    {
        int sum = 0;
        if (a != NULL)
        {
            sum = sum + a->data;
            a = a ->next;
        }

        if (b != NULL)
        {
            sum = sum + b->data;
            b = b ->next;
        }

        sum = sum + carry;
        carry = sum / 10;
        Node* temp = new Node();
        temp->data = sum%10;
        current->next = temp;
        current= current->next;
    }
    return head->next;

}
void display(Node* temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* ans = NULL;
    Node* a = NULL;
    Node* b = NULL;

    push(&a,2);
    push(&a,4);
    push(&a,3);
    push(&a,7);
    cout<<"First linked list: ";
    display(a);

    push(&b,5);
    push(&b,6);
    push(&b,4);
    push(&b,2);
    cout<<"Second linked list: ";
    display(b);

    ans = addLinkedlist(a,b);
    cout<<"The Sum of two linked list: ";
    display(ans);
    return 0;
}
