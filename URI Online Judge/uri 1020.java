import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int d,y,m;
		d = input.nextInt();
		y = d/365;
		d = d-(y*365);
		m = d/30;
		d = d-(m*30);
		System.out.printf("%d ano(s)\n",y);
		System.out.printf("%d mes(es)\n",m);
		System.out.printf("%d dia(s)\n",d);
	}

}
