// program to find the maximum among three numbers.
import java.util.Scanner;
class a10
{
    public static void main(String[]args)
 {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        System.out.println("Enter first number : ");
        a = sc.nextInt();
        System.out.println("Enter second number : ");
        b = sc.nextInt();
        System.out.println("Enter third number : ");
        c = sc.nextInt();

        if(a>=b) 
     {

        if(a>=c) 
        {
            System.out.println(a+" is  maximum.");
        } 
        else 
        {
            System.out.println(c+" is  maximum.");
        }
        
    } else 
    {
        if(b>=c) 
        {
            System.out.println(b+" is  maximum.");
        } else 
        {
            System.out.println(c+" is  maximum.");
        }

    }
 }
}


