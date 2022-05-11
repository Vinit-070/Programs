//Reverse a string without using a function

#include<iostream>
#include<string>
using namespace std;
int main() 
{ 
    string str="Journal Dev reverse example"; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
        cout<<str[i];
    }
    return 0;
}


// Write a c++ program to read a string and find the number of vowels in it
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100] = "prepinsta";
    int vowels = 0;
    
    // can also do str[i] != '\0' in condition below both would work
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
    }
    
    cout << "Total Vowels : " << vowels;
    
    return 0;
}






Write a program that will demonstrate the use of strcat( ), strcmp( ), strcpy( ), strlen( ) functions. (C++ only)
#include <iostream>
#include <cstring>
using namespace std;
int main() {

	char name1[10] = "Guru99";
	char name2[10] = "John";
	char name3[10];

	int  len;
	strcpy(name3, name1);
	cout << "strcpy( name3, name1) : " << name3 << endl;

	strcat(name1, name2);
	cout << "strcat( name1, name2): " << name1 << endl;

	len = strlen(name1);
	cout << "strlen(name1) : " << len << endl;
	return 0;
}

Write a program to remove duplicate characters from a string
#include<iostream>
#include <cstring>
using namespace std;
main()
{
    string str;
    cout<<"Enter your String:";
    getline(cin,str);
    int in,len=0,i,max=-1;
    char sub_str[100][100]={0};
    for(in=0;str[in]!='\0';in++)
    {
        len++;
    }
    int arr[256]={0};
    for(i=0;i<len;i++)
    {
        if(str[i]!=' ')
        arr[str[i]]++;
    }
    cout<<"After Removing Duplicate character from a given string:";
    for(i=0;i<len;i++)
    {
        if(str[i]!=' '){
        if(arr[str[i]]!=0)
        {
            cout<<str[i];
            arr[str[i]]=0;
        }}
        else
        {
            cout<<str[i];
        }
    }
}

Input/Output:
Enter your String:c++ string question

Write a program using function program to add first N numbers.
#include<iostream>
using namespace std;
int main()
{
    int i, n, num, sum=0;
    cout<<"How many numbers you want to enter ? ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++)
    {
        cin>>num;
        sum = sum+num;
    }
    cout<<"\nSum of all "<<n<<" numbers is "<<sum;
    cout<<endl;
    return 0;
}
Write a program to calculate factorial of a number using recursion.
#include <iostream>  
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  

Write a program that demonstrates the use of enum type.
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}

