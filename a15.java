//Program to find factorial of a number.
import java.util.Scanner;

class a15 
{
        public static void main(String[] args) 
    {

        int num, i, fact=1;
      Scanner s = new Scanner(System.in);
      
      System.out.print("Enter a Number: ");
      num = s.nextInt();
      
      for(i=1;i<=num;i++)
      {
          fact=fact*i;    
      }
      System.out.println("Factorial of "+num+" is "+fact);
    }
}