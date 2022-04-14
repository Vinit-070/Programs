//Program to calculate volume of cube
import java.util.Scanner;
class a4{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int a, vol;
        System.out.println("Enter length of cube : ");
        a = sc.nextInt();
        vol = a*a*a;
        System.out.println("Volume of cube : "+vol);


    }
}