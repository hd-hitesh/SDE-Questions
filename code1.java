
import java.lang.*;
import java.util.*;
import java.io.*;

class Codechef {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int a =  Integer.parseInt(br.readLine()); int b =  Integer.parseInt(br.readLine()); int c =  Integer.parseInt(br.readLine());
		if(a>=100 && a<1000 && b>=100 && b<1000 && c>=100 && c<1000){
			int m = -1, pin = 0;
		pin = pin * 10 + (min(a % 10 , b % 10, c % 10));
		m = max(a % 10 , b % 10, c % 10);	a /= 10; b /= 10; c /= 10;
		int mm = max(a % 10 , b % 10, c % 10); m = max(m, mm, -1);
		pin = pin * 10 + (min(a % 10 , b % 10, c % 10));
		a /= 10; b /= 10; c /= 10;	pin = pin * 10 + min(a%10, b%10, c%10);
		mm = max(a % 10 , b % 10, c % 10); m = max(m, mm, -1);	pin = pin * 10 + m;
		int nn = 0; while (pin > 0) {nn = nn * 10 + pin % 10; pin /= 10;}
		System.out.println(nn);
		}
		else System.out.println("INVALID INPUT");

		
	}

	static int min(int a, int b, int c) {
		if (a <= b && a <= c)return a;
		else if (b <= a && b <= c)return b;
		else return c;
	}
	static int max(int a, int b, int c) {
		if (a >= b && a >= c)return a;
		else if (b >= a && b >= c)return b;
		else return c;
	}
}