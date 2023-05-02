package my_code;
import java.util.Scanner;
public class positive_negative {
public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the number to check whether it is +ve or -ve:");
	int num=sc.nextInt();
	if(num>0) {
		System.out.println(num+"is a Positive Number");
	}
	else if(num<0) {
		System.out.println(num+"is a negative number");
	}
	else {
		System.out.println("Please enter a positive or negative number");
	}
  }
 }
