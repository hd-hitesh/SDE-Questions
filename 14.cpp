#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long int n, m, u, q;
	cin >> n >> m >> u >> q;
	long long int arr[n + 10][m + 10] = {0};
	for (int i = 0; i < n; i++)
	{	for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	long long int mat[n + 10][m + 10];
	for (int i = 0; i < n + 10; i++)
		for (int j = 0; j < m + 10; j++)
			mat[i][j] = 0;
	while (u--)
	{	long long int k, r1, c1, r2, c2;
		cin >> k >> r1 >> c1 >> r2 >> c2;

		for (int i = c1; i <= c2; i++)
		{	mat[r1][i] += k;
			mat[r2 + 1][i] -= k;
		}
	}
	for (int i = 0; i < m; i++)
	{	for (int j = 1; j < n; j++)
		{	mat[j][i] += mat[j - 1][i];

		}
	}
	for (int i = 0; i < n; i++)
	{	for (int j = 0; j < m; j++)
		{	arr[i][j] += mat[i][j];

		}
	}
	long long int pre[n + 10][m + 10] = {0};
	for (int i = 0; i < n + 10; i++)
		for (int j = 0; j < m + 10; j++)
			pre[i][j] = 0;
	for (int i = 0; i < m; i++)
	{	pre[0][i] = arr[0][i];
		for (int j = 1; j < n; j++)
		{	pre[j][i] = pre[j - 1][i] + arr[j][i];

		}
	}
	while (q--)
	{	long long int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		long long int ans = 0;

		for (int i = c1; i <= c2; i++)
		{	ans = ans + pre[r2][i] - pre[r1][i] + arr[r1][i];

		}
		cout << ans << endl;
	}
}


// #include <bits/stdc++.h>
// #define pb push_back
// #define fr first
// #define sc second
// #define MOD 1e9 + 7
// #define len(x) x.size()
// #define min(a, b) ((a) < (b) ? (a) : (b))
// #define max(a, b) ((a) > (b) ? (a) : (b))
// #define min3(a, b, c) min(a, min(b, c))
// #define max3(a, b, c) max(a, max(b, c))
// #define FOR(i,j,n) for(int i=j;i<n;i++)
// #define FORR(i,j,n) for(int i=j;i>n;i--)
// // #define FOR(i,n) for(int i=0;i<n;i++)
// // #define FORR(i,n) for(int i=j;i>=0;i--)
// #define all(v) v.begin(), v.end()
// #define endl "\n";
// #define tez_chal_bsdk                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);

// using namespace std;

// typedef long long int ll;
// typedef unsigned long long int ull;
// typedef vector<ll> vll;
// typedef vector<int> vi;
// typedef vector<string> vs;
// typedef unordered_map<string, int> mps;
// typedef unordered_map<ll, ll> mpl;

// #define cint(a) int a; cin>>a;
// #define cin(a) ll a; cin>>a;
// #define cin2(a,b) ll a,b; cin>>a>>b;
// #define cin3(a,b,c) ll a,b,c; cin>>a>>b>>c;
// #define vin(v,n) for(ll i=0; i<n;i++) cin>>v[i];
// #define vout(v,n) for(ll i=0; i<n;i++) cout<<v[i]<<" "; cout<<endl;

// void solve1()
// {
// 	int n, m, u, q; cin >> n >> m >> u >> q;
// 	int a[n][m];

// 	FOR(i, 0, n)
// 	FOR(j, 0, m)
// 	cin >> a[i][j];

// 	FOR(w, 0, u) {
// 		cin3(k, r1, c1); cin2(r2, c2);
// 		FOR(i, r1, r2 + 1)
// 		FOR(j, c1, c2 + 1)
// 		a[i][j] += k;
// 	}
// 	ll sum = 0;
// 	FOR(w, 0, q) {
// 		sum = 0;
// 		cin2(r1, c1); cin2(r2, c2);
// 		FOR(i, r1, r2 + 1)
// 		FOR(j, c1, c2 + 1)
// 		sum += a[i][j];
// 		cout << sum << endl;
// 	}
// }

// int main()
// {
// 	tez_chal_bsdk;
// #ifndef ONLINE_JUDGE
// 	freopen("input1.txt", "r", stdin);
// 	freopen("output1.txt", "w", stdout);
// #endif

// 	solve();
// 	// cint(t);
// 	// while (t--)
// 	// {
// 	// 	solve();
// 	// 	cout << endl;
// 	// }

// 	return 0;
// }

// // ctrl +  alt + F   :  format the code
// // ctrl + shift + B  :  build with
// // ctrl + B          :  build
// // ctrl + X          :  cut the line
// // ctrl +
// /*

// */