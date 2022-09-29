#include<iostream>
using namespace std;
int main()
{
    int array1[13];
    cout<<"Enter your values : "<<endl;
    for(int i=0; i<13; i++)
    {

        cin>>array1[i];
    }

    cout<<"Output in order : "<<endl;

    for(int i=0; i<13; i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    cout<<"Even : ";
    for(int i=0; i<13; i++)
    {
        if(array1[i]%2==0)
        {
            cout<<array1[i]<<" ";
        }
    }
cout<<endl;
    cout<<"Odd : ";
    for(int i=0; i<13; i++)
    {
        if(array1[i]%2!=0)
        {
            cout<<array1[i]<<" ";
        }
    }
    return 0;
}
