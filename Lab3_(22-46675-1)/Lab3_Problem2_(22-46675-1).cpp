#include<iostream>
using namespace std;
int main()
{
    string sen;
    cout<<"Enter your sentence : "<<endl;

    getline(cin,sen);

    cout<<"Your sentence : ";
    for(int i=0; i<sen.size(); i++)
    {
        cout<<sen[i];
    }
    cout<<endl;
    int n,temp;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    for(int i=2; i<sen.size(); i+=3)
    {
        temp=sen[i];
        sen[i]=char(temp+n);
    }
    cout<<"Your Output : ";
    for(int i=0; i<sen.size(); i++)
    {
        cout<<sen[i];
    }
    return 0;
}
