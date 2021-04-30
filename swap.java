package series;
import java.util.Scanner;

public class swap {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int a,b;
		
		System.out.println("Enter the first number(a) : ");
		a = sc.nextInt();
		
		System.out.println("Enter the second number(b) : ");
		b =sc.nextInt();
		
		int temp;
		
		temp = a;
		a = b;
		b = temp;
		
		System.out.println("Updated a is : "+a);
		System.out.println("Updated b is : "+b);

	}

}
