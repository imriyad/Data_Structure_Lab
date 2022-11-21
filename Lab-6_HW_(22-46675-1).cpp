#include<bits/stdc++.h>
using namespace std;
int front=-1,n=5;
int rear=-1;
int CQueue[5];
void Enqueue(int x)
{
    if((rear+1)%n==front)
    {
        cout<<"Overflow"<<endl;
    }
    else if(front=-1&&rear==-1)
    {
        front=rear=0;
        CQueue[rear]=x;
        cout<<"Enqueue successfull"<<endl;
    }
    else
    {
        rear=(rear+1)%n;
        CQueue[rear]=x;
        cout<<"Enqueue successfull"<<endl;

    }
}
void Dequeue()
{
    if(front==-1&&rear==-1)
    {
        cout<<"Underflow"<<endl;
    }
    else if(front==rear)
    {
        cout<<CQueue[front];
        front=rear=-1;
        cout<<" is Dequeue successfully"<<endl;

    }
    else
    {
        cout<<CQueue[front];
        front=(front+1)%n;
        cout<<" is Dequeued successfully"<<endl;

    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue elements:"<<endl;

        while(i!=rear)
        {
            cout<<CQueue[i]<<endl;
            i=(i+1)%n;
        }
        cout<<CQueue[rear]<<endl;
        cout<<"Front element : "<<CQueue[front]<<endl;

    }
}
/*void frontele()
{
    cout<<CQueue[front]<<endl;
}*/
int main()
{
    Enqueue(5);
    Enqueue(12);
    Enqueue(17);
    Enqueue(13);
    display();
    Dequeue();
    display();
    Dequeue();
    display();
    Enqueue(8);
    Enqueue(21);

}
