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

#define llin(a) ll a; cin>>a;
#define llin2(a,b) ll a,b; cin>>a>>b;
#define llin3(a,b,c) ll a,b,c; cin>>a>>b>>c;
#define vecin(n, v) for(ll i=0; i<n;i++) cin>>v[i];

bool sq[2001];
void solve()
{
	llin(n);
	vll v;

	mpl ump;
	FOR(i, 0, n)
	{
		llin(a);
		ump[a]++;
	}

	for (auto i : ump)
		v.pb(i.fr);

	n = v.size();
	ll c = 0;

	FOR(i, 0, n)
	{
		ll f = ump[v[i]];
		if (f > 1 && sq[2 * v[i]])
			c += (f * (f - 1)) / 2;
		for (ll j = i + 1; j < n; j++)
		{
			if (sq[v[i] + v[j]])
				c += (f * ump[v[j]]);
		}
	}

	cout << c;

}

int main()
{
	tez_chal_bsdk;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	memset(sq, false, sizeof(sq));
	FOR(i, 1, sqrt(2001))
	{
		if (i * i <= 2001)
			sq[i * i] = true;
		if (i * i * i <= 2001)
			sq[i * i * i] = true;
	}

	llin(t);
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