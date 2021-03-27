package series;
import java.util.Scanner;

public class SimpleInterest {

	public static void main(String[] args) {
	 
		double P,R,T;
		
		Scanner sc =new Scanner(System.in);

		System.out.println("Enter Principal, Rate and Time : ");
		
		P = sc.nextDouble();
		R = sc.nextDouble();
		T = sc.nextDouble();
		
		double SI = P*R*T/100;
		
		System.out.println("The Simple Interest for the given values is : "+SI);

	}
	
	

}
