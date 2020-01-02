import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double a,b,c;
		a = input.nextDouble();
		b = input.nextDouble();
		c = input.nextDouble();
		System.out.printf("TRIANGULO: %.3f\n",(0.5*a*c));
		System.out.printf("CIRCULO: %.3f\n",3.14159*c*c);
		System.out.printf("TRAPEZIO: %.3f\n",((a+b)/2)*c);
		System.out.printf("QUADRADO: %.3f\n", b*b);
		System.out.printf("RETANGULO: %.3f\n", a*b);
		

	}

}
