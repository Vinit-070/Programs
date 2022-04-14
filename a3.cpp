// Basic Calculator
#include<iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, multi; 
    float div;
    cout<<"Enter First No.: ";
    cin>>a;
    cout<<"Enter Second No.: ";
    cin>>b;

    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;

    cout<<"The Sum is "<<sum<<endl;
    cout<<"The Sub is "<<sub<<endl;
    cout<<"The Multi is "<<multi<<endl;
    cout<<"The Div is "<<div<<endl;
    return 0;
}