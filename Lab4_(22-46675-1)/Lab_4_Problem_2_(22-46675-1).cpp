#include<iostream>
using namespace std;
int main()
{
    int Array[6]= {1,4,5,3,9,11};
    int n,count=0;
    cout<<"Enter your number which you want to know : ";
    cin>>n;

    for(int i=0;i<6; i++)
    {
        if(n==Array[i])
        {
            cout<<n<<" is in index "<<i;
            count++;
        }

    }
    if(count==0)
    {
        cout<<n<<" is not present in the array "<<endl;
    }
    return 0;
}
