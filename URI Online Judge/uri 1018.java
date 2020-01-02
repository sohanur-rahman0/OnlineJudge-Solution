import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t,a,b,c,d,e,f;
		t = input.nextInt();
		System.out.println(t);
		System.out.printf("%d nota(s) de R$ 100,00\n",t/100);
		a = t%100;
		System.out.printf("%d nota(s) de R$ 50,00\n", a/50);

	    b=a%50;

	    System.out.printf("%d nota(s) de R$ 20,00\n", b/20);

	    c=b%20;

	    System.out.printf("%d nota(s) de R$ 10,00\n", c/10);

	    d=c%10;

	    System.out.printf("%d nota(s) de R$ 5,00\n", d/5);

	    e=d%5;

	    System.out.printf("%d nota(s) de R$ 2,00\n", e/2);

	    f=e%2;

	    System.out.printf("%d nota(s) de R$ 1,00\n", f/1);
	}

}
