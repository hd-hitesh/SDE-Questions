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


void solve()
{
	int x = 0, y = 0;
	string s;
	cin >> s;

	int i, ii = -1, p = 0;
	while ((i = s.find("1", p)) != string::npos) {
		++x;
		if (ii == -1)
			ii = i;
		p = i + 1;
	}
	// cout<<p<<" "<<ii<<" "<<x;
	if (p - ii == x )cout << "YES\n";
	else cout << "NO\n";

}

int main()
{
	tez_chal_bsdk;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	// solve();
	int t; cin >> t;

	while (t--)
	{
		solve();
		// cout << endl;
	}

	return 0;
}

// ctrl +  alt + F   :  format the code
// ctrl + shift + B  :  build with
// ctrl + B          :  build
// ctrl + X          :  cut the line
// ctrl +