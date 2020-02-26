import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while(true) {
            int h = input.nextInt();
            int m = input.nextInt();
            int hh = input.nextInt();
            int mm = input.nextInt();
            if(h==0 && m==0 && hh ==0 && mm==0)break;

            int start;
            if(h==0){
                start = 1440 + m;
            }else{
                start = h*60 + m;
            }
            int end;
            if(hh==0){
                end = 1440 + mm;
            }else{
                end = hh*60 + mm;
            }

            if(start<end){
                System.out.println(end-start);
            }else{
                System.out.println(1440 - (start-end));
            }
        }
    }
}
