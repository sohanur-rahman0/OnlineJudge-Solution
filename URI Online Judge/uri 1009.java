import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		double s=0;
		double e,t;
		String name = in.nextLine();
		 s = in.nextDouble();
		 e = in.nextDouble();
		 t = s + e*.15;
		System.out.printf("TOTAL = R$ %.2f\n",t);

	}

}
