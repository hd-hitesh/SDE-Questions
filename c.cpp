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
#define test(n) cout<<"___"<<n<<"___\n";
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

	cin(n); ll v[n];
	vin(v, n); mpl m;
	bool flag = true;
	FOR(i, n) {m[v[i]]++;}
	FOR(i, n - 1) {	if (v[i] != v[i + 1]) {	flag = false; break;}}
	if (flag) {cout << 0; return;}
	if ( (v[0] == v[n - 1] && m[v[n - 1]] == 2) || m.size() == n) {cout << 1 << " " << m[v[0]]; return;}
	if ( (v[0] == v[n - 1])){m[v[0]]-=2;}
	ll min_f = m[v[0]];
	for (auto i : m)
	{	int p=0;
		while(i.fr==v[p++])m[i.fr]--;p=0;
		while(i.fr==v[n-1-p++])m[i.fr]--;	
		if (i.sc < min_f)min_f = i.sc;
	}
	cout << min_f + 1;

}

int main()
{
	tez_chal_bsdk;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	// solve();
	cint(t);
	while (t--)
	{
		solve();
		cout << endl;
	}

	return 0;
}

// ctrl +  alt + F   :  format the code
// ctrl + shift + B  :  build with
// ctrl + B          :  build
// ctrl + X          :  cut the line
// ctrl +

/*
5
3
1 1 1
5
1 2 3 4 5
5
1 2 3 2 1
7
1 2 3 1 2 3 1
11
2 2 1 2 3 2 1 2 3 1 2

*/