#include<bits/stdc++.h>
using namespace std;
 struct node {
    int data;
    struct node *next;
};
 
// We construct a linked list and use this function to push elements to the list 
void push(struct node **head, int data) 
{
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = (*head);
    (*head) = node;
}
 
// Function to reverse the list
void reverse(struct node **head) 
{
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = (*head);
    while(current != NULL) 
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (*head) = prev;
}
 
// To display program in Screen 
void display(struct node *head) 
{
    while(head != NULL) 
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
 // Driver function
int main() 
{
    struct node *head = NULL;
    push(&head, 8);
    push(&head, 9);
    push(&head, 3);
    push(&head, 7);
    cout << "Original Linked List" << endl;
    display(head);
    reverse(&head);

    cout << endl;
    cout << "Reversed Linked List"<<endl;
    display(head);
    return 0;
}