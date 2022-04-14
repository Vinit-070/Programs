//program to swap 2 no.
#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter two no. to swap"<<endl;
    cin>>a>>b;
    cout<<"Before swapig\n A= "<<a<<endl<<"B="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapig\n A= "<<a<<endl<<"B="<<b<<endl;
    return 0;
}