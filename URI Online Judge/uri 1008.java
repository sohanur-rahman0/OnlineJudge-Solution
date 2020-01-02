import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a,b;
		double c,ans;
		a = in.nextInt();
		b = in.nextInt();
		c = in.nextDouble();
		ans = b * c;
		System.out.println("NUMBER = "+a);
		System.out.printf("SALARY = U$ %.2f\n",ans);

	}

}
