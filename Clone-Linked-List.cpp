// C++ Program to clone a Linkedlist with random and next pointer
#include <bits/stdc++.h>
using namespace std;
struct Node 
{
	int val;
	Node* next;
	Node* random;

	Node(int x)
	{
		this->val = x;
		this->next = NULL;
		this->random = NULL;
	}
};

Node* CloneLinkedList(Node* head)
{
	unordered_map<Node*, Node*> mp;
	Node *temp, *nhead;

	temp = head;
	nhead = new Node(temp->val);
	mp[temp] = nhead;

	while (temp->next != NULL) 
    {
		nhead->next= new Node(temp->next->val);
		temp = temp->next;
		nhead = nhead->next;
		mp[temp] = nhead;
	}
	temp = head;

	while (temp != NULL) 
    {
		mp[temp]->random = mp[temp->random];
		temp = temp->next;
	}

	return mp[head];
}

void display(Node* head)
{
	cout << head->val << "("<< head->random->val << ")";
	head = head->next;
	while (head != NULL) 
    {
		cout << " -> " << head->val << "("<< head->random->val << ")";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	Node* head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next= new Node(5);
	head->random = head->next->next;
	head->next->random = head;
	head->next->next->random= head->next->next->next->next;
	head->next->next->next->random= head->next->next;
	head->next->next->next->next->random= head->next;

	cout << "The original linked list:\n";
	display(head);

	Node* sol = CloneLinkedList(head);
	cout << "The cloned linked list:\n";
	display(sol);

	return 0;
}

