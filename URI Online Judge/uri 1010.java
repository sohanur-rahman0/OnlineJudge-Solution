import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		int n,u;
		double v,ans=0;
		Scanner in = new Scanner(System.in);
		
		for(int i=1; i<=2; i++){
			n = in.nextInt();
			u = in.nextInt();
			v = in.nextDouble();
			ans+= u*v;
		}
		System.out.printf("VALOR A PAGAR: R$ %.2f\n",ans);
	}

}
