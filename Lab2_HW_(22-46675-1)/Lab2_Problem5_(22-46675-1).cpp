#include<iostream>
using namespace std;
int main()
{
    int Array[10],n,count=0;
    cout<<"Enter your values : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>Array[i];
    }
    cout<<"Enter your input which you want to search : "<<endl;
    cin>>n;

    cout<<n<<" Occurs : ";
    for(int i=0;i<10;i++)
    {
        if(n==Array[i])
        {
            count++;
        }
    }
    cout<<count;
    cout<<" times";
}
