// program to check that no. is odd or even  
import java.util.Scanner;
class a6{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a;
        System.out.println("Enter any no. : ");
        a = sc.nextInt();
        if(a==0)
        {
            System.out.println(+a+" is a neutral no.");
        }
        else if(a%2==0)
        {
            System.out.println(+a+" is an even no.");
        }
        else
        {
            System.out.println(+a+" is an odd no.");
        }
    }
}