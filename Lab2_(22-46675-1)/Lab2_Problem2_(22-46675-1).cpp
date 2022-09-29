#include<iostream>
using namespace std;
int main()
{
    int array1[4],s=0;
    int array2[3];
    int array3[7];

    cout<<"Put your values for 1st array : "<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>array1[i];
    }
    cout<<"Put your values for 2nd array : "<<endl;
    for(int i=0;i<3;i++)
    {
        cin>>array2[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(array1[i]==array2[j])
            {
                array3[s]=array2[j];
                s++;
            }
        }
    }
    if(s!=0)
    {
        cout<<"Common elements are : "<<endl;
    }
    else{
        cout<<"No common elements there!!"<<endl;
    }
    for(int i=0;i<s;i++)
    {
        cout<<array3[i]<<" "<<endl;
    }

}
