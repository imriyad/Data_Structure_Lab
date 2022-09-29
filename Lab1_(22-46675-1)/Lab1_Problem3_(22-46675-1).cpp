#include<iostream>
using namespace std;

void dis(int ini,int ter)
{
    int array1[]= {1,3,4,6,9,12,13,15,26,29,33,37,41};
    cout<<" Odd :";

    for(int i=0; i<13; i++)
    {
        for(int j=ini; j<=ter; j++)
        {
            if(array1[i]==j&&j%2!=0)
            {
                cout<<j<<" ";
            }
        }
    }

}
int main()
{

    int ini;
    int ter;
    cout<<"Enter initial number : "<<endl;
    cin>>ini;
    cout<<"Enter terminal number : "<<endl;
    cin>>ter;
    dis(ini,ter);

    return 0;
}

