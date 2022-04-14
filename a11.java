// basic calculator using switch case
import java.util.Scanner;

class a11 {
  public static void main(String[] args) {

    char op;
    float a, b, c;
    Scanner input = new Scanner(System.in);

    
    System.out.println("Choose an operator: +, -, *, or /");
    op = input.next().charAt(0);

    
    System.out.println("Enter first number");
    a = input.nextFloat();

    System.out.println("Enter second number");
    b = input.nextFloat();

    switch (op) {

      
      case '+':
        c = a + b;
        System.out.println(a + " + " + b + " = " + c);
        break;

      
      case '-':
        c = a - b;
        System.out.println(a + " - " + b + " = " + c);
        break;

      
      case '*':
        c = a * b;
        System.out.println(a + " * " + b + " = " + c);
        break;

     
      case '/':
        c = a / b;
        System.out.println(a + " / " + b + " = " + c);
        break;

      default:
        System.out.println("Invalid operator!");
        break;
    }

    input.close();
  }
}