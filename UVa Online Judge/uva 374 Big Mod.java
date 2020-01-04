import java.math.BigInteger;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger b,m,p;
		while(input.hasNext()) {
		BigInteger ans;
		b = input.nextBigInteger();
		p = input.nextBigInteger();
		m = input.nextBigInteger();
		ans =b.modPow(p,m);
		System.out.println(ans);
		}

	}

}
