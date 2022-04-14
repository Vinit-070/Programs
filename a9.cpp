// program for exam result analysis system
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter your marks : ";
    cin>>m;

    if(m==12)
    {
        cout<<"Congrulations !! You are passed with D Grade."<<endl;
    }
    else if (m>=13 && m<=20)
    {
        cout<<"Congrulations !! You are passed with C Grade."<<endl;
    }
    else if (m>=21 && m<=25)
    {
        cout<<"Congrulations !! You are passed with B Grade."<<endl;
    }
    else if (m>=26 && m<=30)
    {
        cout<<"Congrulations !! You are passed with A Grade."<<endl;
    }
    else
    {
        if (m<12)
        {
            cout<<"Alert !! You are failed and you have to give makeup test to clear the subject."<<endl;
        }
        else
        {
            cout<<"Please Enter correct marks !!!"<<endl;
        }
    }
    return 0;
}