// program to find the maximum among three numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"Enter third number : ";
    cin>>c;

     if(a>=b) 
     {

        if(a>=c) 
        {
            cout << endl <<a<< " is  maximum";
        } 
        else 
        {
            cout << endl <<c<< " is  maximum";
        }
        
    } else 
    {
        if(b>=c) 
        {
            cout << endl <<b<< " is  maximum";
        } else 
        {
            cout << endl <<c<< " is  maximum";
        }

    }

    return 0;
}
