#include <bits/stdc++.h>

#define tez_chal_bsdk                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

#define ll long long

const int N = 3e5 + 5;
ll a[N];
void solve()
{
	int n, p;
	cin >> n >> p;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		a[max(0, x - y)]++;
		a[min(p + 1, x + y + 1)]--;
	}
	for (int i = 1; i <= p; i++) a[i] += a[i - 1];
	int ans = 0, cnt = 0;
	for (int i = 0; i <= p; i++) {
		if (a[i] != 1) cnt++;
		else ans = max(ans, cnt), cnt = 0;
	}
	cout << max(ans, cnt);

}

int main()
{
	tez_chal_bsdk;
	solve();


	return 0;
}

// ctrl +  alt + F   :  format the code
// ctrl + shift + B  :  build with
// ctrl + B          :  build
// ctrl + X          :  cut the line
// ctrl +
/*

*/