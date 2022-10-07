#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter your row size : "<<endl;
    cin>>i;
    cout<<"Enter your column size : "<<endl;
    cin>>j;
    cout<<"Enter your values : "<<endl;
    int Array[i][j],Array1[j][i];
    for(int k=0; k<i; k++)
    {
        for(int l=0; l<j; l++)
        {
            cin>>Array[k][l];
        }
    }
    cout<<"General output : "<<endl;
    for(int k=0; k<i; k++)
    {
        for(int l=0; l<j; l++)
        {
            cout<<Array[k][l]<<" ";
        }
        cout<<endl;
    }
    for(int k=0; k<i; k++)
    {
        for(int l=0; l<j; l++)
        {
            Array1[l][k]=Array[k][l];
        }
    }


    cout<<"Output in transpose :"<<endl;
    for(int l=0; l<j; l++)
    {
        for(int k=0; k<i; k++)
        {

            cout<<Array[k][l]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
