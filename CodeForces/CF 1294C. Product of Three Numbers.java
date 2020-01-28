import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		 long tc = input.nextLong();
		 long temp = 0;
		 while(tc>0) {
			 tc--;
			 boolean flag = true;
			 long n = input.nextLong();
			 for(int i=2; i*i<=n; i++) {
				 if(n%i==0) {
					 temp = i;
					 n/=i;
					 break;
				 }
			 }
			 if(temp<2) {
				 System.out.println("NO");
				 continue;
			 }
			 for(int i=2; i*i<=n; i++) {
				 if(n%i==0 && i!=temp && (n/i)!=i) {
					 System.out.println("YES");
					 System.out.println(temp + " "+i+ " "+ n/i);
					 flag= false;
					 break;
				 }
			 }
			 if(flag) {
				 System.out.println("NO");
			 }
		 }

	}

}
