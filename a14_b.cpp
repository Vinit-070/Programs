/*Program to print pattern 2
1
35
7911
*/
#include<iostream>
using namespace std;
int main ()
{
    int a,i,j,k=1;
    cout<<"Enter no. of rows : "; 
    cin>>a;

    for(i=1;i<=a;i++)
    {
        for (j = 1; j <=i; j++)
        {
            cout<<2*k-1;
            k++;
        }
        cout<<endl;
    }
    return 0;
}