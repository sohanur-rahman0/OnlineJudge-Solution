import java.util.Scanner;
public class Main {
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		double a,b,c;
		a = in.nextDouble();
		b = in.nextDouble();
		c = in.nextDouble();
		System.out.printf("MEDIA = %.1f\n", (a*2+b*3+c*5)/10);
	}
	
}
