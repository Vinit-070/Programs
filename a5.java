//program to swap 2 no.
import java.util.Scanner;
class a5{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a, b, temp;
        System.out.println("Enter value of a : ");
        a = sc.nextInt();
        System.out.println("Enter value of b : ");
        b = sc.nextInt();
        System.out.println("Before swaping \nA: "+a+ "\nB : "+b);
        temp=a;
        a=b;
        b=temp;
        System.out.println("After swaping \nA: "+a+ "\nB : "+b);

    }
}