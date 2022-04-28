/*Program to print pattern 2
AAAA
BBB
CC
D
*/

import java.util.Scanner;

class Main
{
        public static void main(String[] args)
 {
        Scanner sc = new Scanner(System.in);
    
    {
        int a,i,j,k=65;
        System.out.print("Enter no. of rows : ");
        a = sc.nextInt();

    for(i=a;i>=1;i--)
    {
        for (j = i; j >=1; j--)
        {
           System.out.print((char)k);
           
        }
         k++;
        System.out.print("\n");
    }
    
  }
 }
}
