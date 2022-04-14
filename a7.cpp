// program to check that no. is Positive or Negative 
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a no. : ";
    cin>>a;
    if(a>0)
    {
        cout<<a<<" is a Positive no."<<endl;
    }
    else if (a<0)
    {
        cout<<a<<" is a Negative no."<<endl;
    }
    else
    {
        cout<<a<<" is zero."<<endl;
    }
    return 0;

}
