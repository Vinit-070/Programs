#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    
    int i,len=0,n;
    char str[10];
    char temp;
    cout<<"Enter String";
    cin>>str;
    len=strlen(str);
    n=len-1;
    for(i = 0; i <=(len/2); i++)
   {
        temp=str[i];
        str[i]=str[n];
        str[n]=temp;
        n--;
   }
    cout<<"Reverse of String is: "<<str;
    return 0;
}