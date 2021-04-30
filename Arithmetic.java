package series;
import java.util.Scanner;

public class Arithmetic {

 
	public static void main(String[] args) {
		 
		float a,b;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter any two numbers : ");
		a = sc.nextFloat();
		b = sc.nextFloat();

		float sum,diff,mul,div;
		
		sum = a + b;
		diff = a- b;
		mul = a*b;
		div = a/b;
		
		System.out.println("Sum of the numbers is : "+sum);
		System.out.println("Difference of the numbers is : "+diff);
		System.out.println("Multiplication of the numbers is : "+mul);
		System.out.println("Division of the numbers is : "+div);
	}

}
