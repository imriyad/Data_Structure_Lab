#include<bits/stdc++.h>
using namespace std;

class Queue{

private:
    int rear,front;
    int arr[10];

public:
    Queue(){
        rear = -1;
        front = -1;
        for(int i = 0; i<10; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if((front == -1 && rear == -1)|| (front>rear))
            return true;
        else
            return false;
    }

    bool isFull(){
        if(rear == 9)
            return true;
        else
            return false;
    }

    void EnQueue(int value){
        if(isFull())
            cout<<"Queue is full !"<<endl;
        else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = value;
            cout<<"Enqueue successfull !"<<endl;
        }
        else{
            rear++;
            arr[rear] = value;
            cout<<"Enqueue successfull !"<<endl;
        }
    }

    void DeQueue(){
        if(isEmpty())
            cout<<"Queue is empty !"<<endl;
        else if(rear == front){
            rear = -1;
            front = -1;
            cout<<"Dequeue Successfull"<<endl;
        }
        else{
            front++;
            cout<<"Dequeue Successfull"<<endl;
        }
    }

    void show(){
        if(isEmpty())
            cout<<"Queue is Empty"<<endl;
        else{
                cout<<"---------Queue Elements---------"<<endl;
            for(int i = front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    int Front(){
        if(isEmpty())
            cout<<"Queue is Empty"<<endl;
        else
            return arr[front];
    }
};

int main()
{
    Queue q;
    q.EnQueue(5);
    q.EnQueue(3);
    q.EnQueue(13);
    q.EnQueue(19);
    q.EnQueue(15);
    q.EnQueue(18);
    q.EnQueue(37);
    q.show();

    cout<<"Front element : "<<q.Front()<<endl;
    q.DeQueue();

    cout<<"Front element : "<<q.Front()<<endl;
    q.DeQueue();
    q.show();

    cout<<"Front element : "<<q.Front()<<endl;
    q.show();

}
