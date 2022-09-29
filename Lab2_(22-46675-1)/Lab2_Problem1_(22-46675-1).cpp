#include<iostream>
using namespace std;
int main()
{
    int array1[5];
    int array2[3];
    int array3[8];

    cout<<"Put your values for 1st array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>array1[i];
    }
    cout<<"Put your values for 2nd array : "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>array2[i];
    }

    int j=0;
    for(int i=0;i<8;i++)
    {
        if(i<5)
        {
            array3[i]=array1[i];
        }
        else
        {
            array3[i]=array2[j];
            j++;
        }
    }
    cout<<"Output in reverse order : "<<endl;
    for(int i=7;i>=0;i--)
    {
        cout<<array3[i]<<" ";
    }
   return 0;
}
