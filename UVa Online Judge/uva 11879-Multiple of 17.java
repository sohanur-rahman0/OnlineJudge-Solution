import java.math.BigInteger;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger t;
		while(input.hasNext()) {
		BigInteger n = input.nextBigInteger();
		BigInteger r = BigInteger.valueOf(17);
		BigInteger z = BigInteger.valueOf(0);
		if(n.equals(z))break;
		
		t = n.remainder(r);
		boolean flag = t.equals(z);
		if(flag) {
			System.out.println(1);
		}else {
			System.out.println(0);
		}
		}
	}

}
