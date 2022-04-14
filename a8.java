// program to compare three numbers and display maximum
import java.util.Scanner;
class a8{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        System.out.println("Enter First no. : ");
        a = sc.nextInt();
        System.out.println("Enter Second no. : ");
        b = sc.nextInt();
        System.out.println("Enter Third no. : ");
        c = sc.nextInt();
        
        if(a>b)
        {
            if(a>c)
            {
                System.out.println(a+" is maximum");
            }
            else
            {
                System.out.println(c+" is maximum");
            }
        }
        else
        {
                if(b>c)
                {
                    System.out.println(b+" is maximum");
                }
                else
                {
                    System.out.println(c+" is maximum");
                }
        }
       
    }
}