#include<iostream>
using namespace std;
int main()
{
    int A[10]={1,2,1,4,1,6,1,8,3,4};
    int n,count=0,i;
    cout<<"Enter your input : "<<endl;
    cin>>n;
    cout<<n<<" Occurs : ";
    for( i=0;i<10;i++)
    {
            if(n==A[i])
            {
                count++;
            }
    }
    cout<<count;
    cout<<" times";
    return 0;
}
