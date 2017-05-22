import java.util.Scanner;
import java.io.IOException;

public class GameTime1046 {
	static Scanner scr = new Scanner(System.in);
	public static void main(String[] args) {
		
		int a = scr.nextInt();
		int b = scr.nextInt();
		if(a>b)
		{
			int result = (24-a) + b;
			System.out.println("O JOGO DUROU " + result + " HORA(S)");
		}
		else if(a<b)
		{
			int result = b - a;
			System.out.println("O JOGO DUROU " + result + " HORA(S)");
		}
		else if(a == b)
		{
			System.out.println("O JOGO DUROU 24 HORA(S)");
		}
		
	}
	
}
