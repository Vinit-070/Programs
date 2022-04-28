/*Program to print pattern 2
1
35
7911
*/

import java.util.Scanner;

class Main
{
        public static void main(String[] args)
 {
        Scanner sc = new Scanner(System.in);
    
    {
        int a,i,j,k=1;
        System.out.print("Enter no. of rows : ");
        a = sc.nextInt();

    for(i=1;i<=a;i++)
    {
        for (j = 1; j <=i; j++)
        {
           System.out.print(2*k-1);
            k++;
        }
        System.out.print("\n");
    }
    
  }
 }
}
