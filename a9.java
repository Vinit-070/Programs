// program for exam result analysis system
import java.util.Scanner;
class a9{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int m;
        System.out.println("Enter Your Marks : ");
        m = sc.nextInt();
        if(m==12)
        {
            System.out.println("Congrulations !! You are passed with D Grade.");
        }
        else if(m>=13 && m<=20)
        {
            System.out.println("Congrulations !! You are passed with C Grade.");
        }
        else if(m>=21 && m<=25)
        {
            System.out.println("Congrulations !! You are passed with B Grade.");
        }
        else if(m>=26 && m<=30)
        {
            System.out.println("Congrulations !! You are passed with A Grade.");
        }
        else
        {
            if(m<12)
            {
             System.out.println("Alert !! You are failed and you have to give makeup test to clear the subject.");
            }
            else
            {
                System.out.println("Please Enter correct marks !!!");
            }
        }
    }
}