#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* pre;
};
void AddAtHead(Node** head, int data){
    Node* newNode = new Node();
    newNode->pre = NULL;
    newNode->data = data;
    newNode->next = NULL;
    *head = newNode;
}

Node* AddAsHead(Node* head, int data){
    Node* newNode = new Node();
    newNode->pre = NULL;
    newNode->next = NULL;
    newNode->data = data;
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
    return head;
}

Node* AddAtLast(Node* head, int data){
    Node* newNode = new Node();
    newNode->pre = NULL;
    newNode->next = NULL;
    newNode->data = data;

    Node* ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->pre = ptr;
    return head;
}

Node* AddBeforePos(Node* head, int data, int pos){
    pos =pos-1;
    Node* newNode = new Node();
    Node* ptr = head;
    Node* temp = new Node();
    newNode->next = NULL;
    newNode->pre = NULL;
    newNode->data = data;

    while(pos != 1){
        ptr = ptr->next;
        pos--;
    }

    temp = ptr->next;
    ptr->next = newNode;
    temp->pre = newNode;
    newNode->next = temp;
    newNode->pre = ptr;
    return head;
}

void display(Node *n)
{
    while(n != NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->data = 4;
    head->pre = NULL;
    head->next = second;
    second->data = 9;
    second->pre = head;
    second->next = third;
    third->data = 2;
    third->pre = second;
    third->next = NULL;
    display(head);
    cout<<endl;
    head = AddBeforePos(head,5,3);
    display(head);


}

