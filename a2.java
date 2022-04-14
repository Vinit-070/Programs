//take input for every datatype and print value
import java.util.Scanner;
class a2{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any string : ");
        String a;
        a = sc.nextLine();
        System.out.println("Enter any integer : ");
        int b;
        b = sc.nextInt();
        System.out.println("Enter any float : ");
        float c;
        c = sc.nextFloat();
        System.out.println("Enter any Double : ");
        double d;
        d = sc.nextDouble();
        System.out.println("Enter any Boolean : ");
        Boolean e;
        e = sc.nextBoolean();
        
        System.out.println("Enter any Char : ");
        char f;
        f = sc.next().charAt(0);


        System.out.println(" String : "+a);
        System.out.println("Integer : "+b);
        System.out.println("Float : "+c);
        System.out.println("Double : "+d);
        System.out.println("Boolean : "+e);
        System.out.println("Character : "+f);
       

    }
}