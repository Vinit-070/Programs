/*Program to print pattern 1

 *
 ***
 *****

*/

import java.util.Scanner;

class a14_a
{
        public static void main(String[] args)
{
        Scanner sc = new Scanner(System.in);
    {
        int a,i,j;
        System.out.print("Enter no. of rows : ");
        a = sc.nextInt();
         for(i=1;i<=a;i++)
      {
        for (j=1; j<=2*i-1; j++)
        {
           System.out.print("*");
        }
         System.out.print("\n");
      }
    }
}
}