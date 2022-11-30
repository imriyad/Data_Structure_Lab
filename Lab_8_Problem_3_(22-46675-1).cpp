#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};
Node* AddAsHead(Node* head, int data)
{
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}
void AddAtHead(Node** head, int data)
{
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    *head = newNode;
}

Node* AddBeforePos(Node* head, int data, int pos)
{
    pos =pos-1;
    Node* newNode = new Node();
    Node* ptr = head;
    Node* temp = new Node();
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = data;

    while(pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }
    temp = ptr->next;
    ptr->next = newNode;
    temp->prev = newNode;
    newNode->next = temp;
    newNode->prev = ptr;
    return head;
}
Node* AddAtLast(Node* head, int data)
{
    Node* newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;

    Node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
    return head;
}
void display(Node* head)
{
    Node* temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != head);
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->data = 4;
    head->prev = third;
    head->next = second;
    second->data = 8;
    second->prev = head;
    second->next = third;
    third->data = 3;
    third->prev = second;
    third->next = head;
    display(head);
    cout<<endl;
    head = AddBeforePos(head,9,2);
    display(head);
}

