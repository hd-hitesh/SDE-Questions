import java.lang.*;
import java.util.*;
import java.io.*;

class Solution {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
		int t =  Integer.parseInt(b.readLine());
		
		while (t-- > 0) {
			int n =   Integer.parseInt(b.readLine());
			String s = b.readLine();
			String[] ss = s.trim().split(" ");
			int[] a = new int[n];

			for (int i = 0; i < n; i++) {
				a[i] = Integer.parseInt(ss[i]);
			}
			sellandbuy(a);
		}
	}

	public static void solve(int[] arr) {

	}
}