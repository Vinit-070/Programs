// program to check that no. is Positive or Negative 
import java.util.Scanner;
class a7{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a;
        System.out.println("Enter any no. : ");
        a = sc.nextInt();
        if(a>0)
        {
            System.out.println(a+" is a Positive no.");
            
        }
        else if(a==0)
        {
            System.out.println(+a+" is a neutral no.");
        }
        else
        {
            System.out.println(+a+" is a Negative no.");
        }
    }
}