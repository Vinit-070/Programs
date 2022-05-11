//Program to find maximum and minimum from 1-D array.
import java.util.Scanner;
class a16_a{
	public static void main(String[]args){
		Scanner sc=new Scanner(System.in);
		int s,min,max;
		System.out.println("Enter the Size of array");
        s=sc.nextInt();
		int a[]=new int[s];
        
		System.out.println("Enter the values of array");
		for(int i=0;i<s;i++){
			a[i]=sc.nextInt();
		}
		min=a[0];
		max=a[0];
		for(int i=0;i<s;i++){
			if(min>a[i]){
				min=a[i];		
			}
			if(max<a[i]){
				max=a[i];		
			}
		}
		System.out.println("Minimum Value = "+min);
		System.out.println("Maximum Value = "+max);
	}
}