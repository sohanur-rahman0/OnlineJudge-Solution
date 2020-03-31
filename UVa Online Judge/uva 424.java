import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str;
        BigInteger sum = BigInteger.ZERO;
        str = input.next();
        while (!str.equals("0")) {
            BigInteger addNum = new BigInteger(str);
            sum = sum.add(addNum);
            str = input.next();
        }
        System.out.println(sum);

    }
}
