//Program to Reverse Nodes in k-Group
#include<bits/stdc++.h>
using namespace std;
 struct Node {
    int data;
    struct Node *next;
};
 
void push(struct Node **head, int data) 
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = (*head);
    (*head) = newnode;
}

Node* reverse(Node* head, int k)
{
    
    if (!head)
        return NULL;
    
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;

    while (current != NULL && count < k) 
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
        head->next = reverse(next, k);
  
    return prev;
}

void display(struct Node *head) 
{
    while(head != NULL) 
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
 
int main() 
{
    struct Node *head = NULL;
    push(&head, 8);
    push(&head, 9);
    push(&head, 3);
    push(&head, 7);
    push(&head, 9);
    cout << "Original Linked List: " << endl;
    display(head);

    head = reverse(head, 3);
    cout << "\nReversed Linked list: \n";
    display(head);
    return 0;
}
  
