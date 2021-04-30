package series;
import java.util.Scanner;
public class ascii {

 
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter any character : ");
		
		char a = sc.next().charAt(0);
		
		System.out.println("ASCII value of entered character is : "+(int)a);

	}

}
