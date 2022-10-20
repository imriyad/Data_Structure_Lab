#include<iostream>
using namespace std;
void bubbleSort(int b[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
               int temp=b[j];
               b[j]=b[j+1];
               b[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter your size :";
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"Not sorted : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
   bubbleSort(b,n);
   cout<<"Sorted :"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<b[i]<<" ";
   }
}
