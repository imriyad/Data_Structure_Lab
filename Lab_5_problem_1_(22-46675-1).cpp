#include<iostream>
using namespace std;
int Stack[10],Top=0,MaxSize=10;
bool isEmpty()
{
    return (Top==0);
}
bool isFull()
{
    return (Top==MaxSize);
}
bool Push(int value)
{
    if(isFull())
    {
        cout<<"Stack is full "<<endl;
        return false;
    }
    Stack[Top++]=value;
    cout<<value<<" is inserted successfully "<<endl;
    return true;
}
bool Pop()
{
    if (isEmpty())
    {
        cout<<" Stack is empty "<<endl;
        return false;
    }
    Top--;
    cout<<"POp operation successfull "<<endl;
    return true;
}
int TopElement()
{
    return Stack[Top-1];
}
void show()
{
    if(isEmpty())
    {
        cout<<"Stack is empty "<<endl;
        return ;
    }
    cout<<"----------Stack Elements------------"<<endl;
    for(int i=Top-1;i>=0;i--)
    {
        cout<<Stack[i]<<endl;
    }
    cout<<endl<<endl;
}
int main()
{
    Push(5);
    Push(6);
    Push(7);
    Push(11);
    show();
    cout<<"Top elements "<<TopElement()<<endl;
    Pop();
    Pop();
    cout<<"Top elements "<<TopElement()<<endl;
    show();
    Pop();
    Pop();
    cout<<"Top elements "<<TopElement()<<endl;
    show();
}
