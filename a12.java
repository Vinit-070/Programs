// program to find sum of all integers greater than 100 and less than 200 which are divisible by 5.
class a12 {
  public static void main(String[] args) {
    int a=0, b=0;
    
 for (int i = 101; i < 200; i++)
 {
     if (i % 5 == 0)
     {
         a = a + i;
         b++;
     }
 }
 System.out.println("The Sum of the number between 100 to 200 which are divisible by 5 is: "+a);
 System.out.println("Total numbers between 100 to 200 which are divisible by 5 is: "+b);
 }
 } 
