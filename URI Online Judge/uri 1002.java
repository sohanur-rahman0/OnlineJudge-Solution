import java.util.Scanner;
public class Main {
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		double r,a;
		double pi = 3.14159;
		r = in.nextDouble();
		a = pi * r * r;
		System.out.printf("A=%.4f\n",a);
	}
	
}
