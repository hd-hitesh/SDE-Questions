#include <bits/stdc++.h>

#define pb push_back
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
// #define FOR(i,j,n) for(int i=j;i<n;i++)
// #define FORR(i,j,n) for(int i=j;i>n;i--)
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORR(i,n) for(int i=j;i>=0;i--)
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

	cin(n); vi v; ll sum[n + 2];
	FOR(i, n) {	cin(x); v.pb(x); } sort(all(v)); sum[0] = v[0];
	for (int i = 1; i < n; ++i)
		sum[i] = sum[i - 1] + v[i];
	cin(q); while (q--) {
		cin(m);
		int ind = upper_bound(all(v), m) - v.begin();
		if (m >= v[n - 1])cout << n << " " << sum[n - 1] << endl
		else
		cout << ind << " " << sum[ind-1] << endl;
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