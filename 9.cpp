#include <bits/stdc++.h>

#define pb push_back
#define fr first
#define sc second
#define MOD 1e9 + 7
#define len(x) x.size()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define FORR(i,j,n) for(int i=j;i>n;i--)
#define all(v) v.begin(), v.end()
#define endl "\n";
#define tez_chal_bsdk                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> mp;
typedef unordered_map<ll, ll> mpl;

#define cint(a) int a; cin>>a;
#define cin(a) ll a; cin>>a;
#define cin2(a,b) ll a,b; cin>>a>>b;
#define cin3(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define vin(v,n) for(ll i=0; i<n;i++) cin>>v[i];
#define vout(v,n) for(ll i=0; i<n;i++) cout<<v[i]<<" "; cout<<endl;

void solve()
{
	int p;
	cin2(n, m);
	int a[n][m];
	int b[n][m];

	FOR(i, 0, n)
	FOR(j, 0, m)
	{
		cin >> b[i][j];
		a[i][j] = 1;
	}

	FOR(i, 0, n)
	FOR(j, 0, m)
	if (b[i][j] == 0)
	{
		FOR(k, 0, n)
		a[k][j] = 0;
		FOR(k, 0, m)
		a[i][k] = 0;
	}

	FOR(i, 0, n)
	FOR(j, 0, m)
	{
		p = 0;
		FOR(k, 0, n)
		p |= a[k][j];
		FOR(k, 0, m)
		p |= a[i][k];
		if (p != b[i][j])
		{
			cout << "NO" << endl;
			return ;
		}
	}

	cout << "YES" << endl;
	FOR(i, 0, n)
	{
		FOR(j, 0, m)
		cout << a[i][j] << " ";
		cout << endl;
	}

}

int main()
{
	tez_chal_bsdk;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	solve();
	// cint(t);
	// while (t--)
	// {
	// 	solve();
	// 	cout << endl;
	// }

	return 0;
}

// ctrl +  alt + F   :  format the code
// ctrl + shift + B  :  build with
// ctrl + B          :  build
// ctrl + X          :  cut the line
// ctrl +