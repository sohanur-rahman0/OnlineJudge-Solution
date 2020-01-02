import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t,h,m;
		t = input.nextInt();
		h = t/3600;
		t = t-(h*3600);
		m = t/60;
		t = t-(m*60);
		System.out.printf("%d:%d:%d\n",h,m,t);

	}

}
