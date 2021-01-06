#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
	int n, k;
	cin >> n >> k;
	    int p = n - k;
	if (k <= n / 2)
	{
		int m = -1;
		for (int i = 1; i <= 2*k; ++i)
		{
			cout << m*i << " "; m = m * -1;
		}
		for (int i = 2*k + 1; i <= n; ++i)
		{
			cout << i * -1 << " ";
		}
	}
	else
	{	int m = 1;
		for (int i = 1; i <= 2*p; ++i)
		{
			cout << m*i << " "; m = m * -1;

		}
		for (int i = 2*p + 1; i <= n; ++i)
		{
			cout << i << " ";

		}
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	}

	return 0;
}
