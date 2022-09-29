#include<iostream>
using namespace std;
int main()
{
    int array1[6],i,j;
    cout<<"Enter your values for the array : "<<endl;
    for(i=0; i<6; i++)
    {
        cin>>array1[i];
    }
    cout<<"Output without repeating : "<<endl;
    for(i=0; i<6; i++)
    {
        for(j=0; j<i; j++)
        {
            if(array1[i]==array1[j])
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<array1[i]<<" ";
        }

    }
    return 0;
}
