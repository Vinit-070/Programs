// Basic Calculator
import java.util.Scanner;
public class a3{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        float a, b, add, sub, multi;
        float div;
        System.out.println("Enter first no. : ");
        a = sc.nextFloat();
        System.out.println("Enter Second no. : ");
        b = sc.nextFloat();
        add=a+b;
        sub=a-b;
        multi=a*b;
        div=(a/b);
        
        System.out.println("Addition is : "+add);
        System.out.println("Subtraction is : "+sub);
        System.out.println("Multiplication is : "+multi);
        System.out.println("Division is : "+div);

    }
}