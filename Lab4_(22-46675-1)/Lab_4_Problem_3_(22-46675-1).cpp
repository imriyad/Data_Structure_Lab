#include<iostream>
using namespace std;
int binarySearch(int num[],int n,int t)
{
    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(t==num[mid])
        {
            return mid;
        }
        else if(t<num[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

}
int main()
{
    int num[]={1,2,3,4,5,6,7};
    int t;
    cout<<"Enter your number you want to search :";
    cin>>t;
    int n=sizeof(num)/sizeof(num[0]);
    int index =binarySearch(num,n,t);

    if(index!=-1)
    {
        cout<<"Element found at "<<index;
    }
    else{
        cout<<"Element not found in the array ";
    }
    return 0;
}
