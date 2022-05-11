// program to sort array elements in ascending order
#include <iostream>
using namespace std;

int main(){
    int i, j, n, temp;
    int a[25];
    
    cout << "Enter the total no. of elements: ";
    cin >> n;
    
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++) 
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (a[i] > a[j]) 
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    
    cout << "Elements sorted in the ascending order are: " << endl;
    for (i = 1; i <= n; i++){
     cout << a[i] << endl;   
    }
    return 0;
}