// program to compare three numbers and display maximum
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter First no. : ";
    cin>>a;
     cout<<"Enter Second no. : ";
    cin>>b;
     cout<<"Enter Third no. : ";
    cin>>c;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is maximum"<<endl; 
        }
        else
        {
            cout<<c<<" is maximum"<<endl; 
        }
    }
    else
        {
            if (b>c)
        {
            cout<<b<<" is maximum"<<endl; 
        }
        else
        {
            cout<<c<<" is maximum"<<endl; 
        }
        }
        return 0;
}   