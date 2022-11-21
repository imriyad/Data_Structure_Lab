#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};
void Insert(struct Node** head, int node_data)
{
    struct Node* newNode = new Node;

    newNode->data = node_data;

    newNode->next = (*head);

    (*head) = newNode;
}

void InsertAfter(struct Node* prev_node, int node_data)
{
    if (prev_node == NULL)
    {
        cout<<" Previous node is required,cannot be NULL ";
        return;
    }

    struct Node* newNode =new Node;

    newNode->data = node_data;

    newNode->next = prev_node->next;

    prev_node->next = newNode;
}

void InsertLast(struct Node** head, int node_data)
{
    struct Node* newNode = new Node;

    struct Node *last = *head;

    newNode->data = node_data;

    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
    return;
}

void displayList(struct Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<"->"<<"  ";
        node = node->next;
    }

    if(node== NULL)
    {
        cout<<"Null";
        cout<<endl;
    }

}
void deleteNode(Node** head_ref,int key)
{
    Node*temp=*head_ref;
    Node* prev=NULL;
    if(temp!=NULL && temp->data==key)
    {
        *head_ref=temp->next;
        delete temp;
        return;
    }
    else
    {
        while(temp!=NULL && temp->data !=key)
        {
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            return;
        }
        prev->next=temp->next;
        delete temp;
    }
}
int main()
{
    struct Node* head = NULL;

    InsertLast(&head, 40);

    Insert(&head, 130);

    Insert(&head, 80);

    InsertLast(&head, 20);

    InsertAfter(head->next, 340);

    displayList(head);

    deleteNode(&head, 20);

    cout<<"Updated linked list: "<<endl;
    displayList(head);

    return 0;
}
