#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{ // pass by reference
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node *head)
{ // pass by value (we are not gonna change anything in linked list)
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node = NULL; // by default (if we don't do it because new node is already created pointing to null)
}
void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != (pos - 1))
    {
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtPosition(Node *&head, int pos, int val)
{
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != pos)
    {
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;
}
int main()
{
    Node *head = NULL;
    insertAtHead(head, 10);
    display(head);
    insertAtHead(head, 20);
    display(head);
    insertAtHead(head, 30);
    display(head);
    insertAtTail(head, 40);
    display(head);
    insertAtTail(head, 50);
    display(head);
    insertAtPosition(head, 144, 2);
    display(head);
    insertAtPosition(head, 99, 2);
    display(head);
    updateAtPosition(head, 2, 95);
    display(head);
    return 0;
}
