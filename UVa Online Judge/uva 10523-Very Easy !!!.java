import java.math.BigInteger;
import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n,a;
		BigInteger AA,sum;
		while(input.hasNextInt()) {
			n = input.nextInt();
			a = input.nextInt();
			//N = new BigInteger.valueOf(n);
			AA = BigInteger.valueOf(a);
			sum = new BigInteger("0");
			for(int i=1; i<=n; i++)
			{
				sum = sum.add(BigInteger.valueOf(i).multiply(AA.pow(i)));
			}
			System.out.println(sum);
		}
	}

}
