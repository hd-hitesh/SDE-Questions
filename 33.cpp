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
#define FOR(i,j,n) for(int i=j;i<n;i++)
#define FORR(i,j,n) for(int i=j;i>n;i--)
// #define FOR(i,n) for(int i=0;i<n;i++)
// #define FORR(i,n) for(int i=j;i>=0;i--)
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

void SieveOfEratosthenes()
{
    ull n = 100000000;;vll pr;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ull p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (ull p = 2; p <= n; p++)
        if (prime[p])
        {
            pr.push_back(p);
            // cout << p << " ";
        }
        ull q=0;
        n=pr.size();test(n);
    while(q<=n){
        cout<<pr[q]<<endl;
        q=q+100;
    }
}

int main()
{

    SieveOfEratosthenes();

    return 0;
}

// ctrl +  alt + F   :  format the code
// ctrl + shift + B  :  build with
// ctrl + B          :  build
// ctrl + X          :  cut the line
// ctrl +
