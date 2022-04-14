// program to check that no. is odd or even 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a no. : ";
    cin>>a;
    if(a%2==0)
    {
        cout<<a<<" is an even no."<<endl;
    }
    else
    {
        cout<<a<<" is an odd no."<<endl;
    }
    return 0;

}