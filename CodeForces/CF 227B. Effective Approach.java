import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long []a = new long[1000000];
        for(long i=1; i<=n; i++){
            long temp = input.nextLong();
            a[(int) temp] = i;
        }
        long m = input.nextLong();
        long A=0,B=0;
        while(m>0){
            m--;
            long query = input.nextLong();
            A+= a[(int) query];
            B+= n-a[(int)query]+1;
        }
        System.out.println(A+" "+B);
    }
}
