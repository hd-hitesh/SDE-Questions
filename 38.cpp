#include<bits/stdc++.h>
using namespace std;

vector<long long> prime;
long long lowA, highA;

//Function to find intersection of all the given intervals
void intersection (long long x, long long y)
{
    long long lim1;
    if (lowA!=-1 && highA!=-1)
    {
        lim1=max(x,lowA);
        if (lim1<=highA)
        {
            lowA=lim1;
            highA=min(highA,y);
        }
        else
        {
            lowA=-1;
            highA=-1;   
        }   
    }
}

//Function to find the no. of primes in a given range
void countPrimes (long long low, long long high)
{
    int check[high-low+1]={0};
    long long lim,i,j;
    if (low==1)
        check[0]=1;
    for (i=0;i<prime.size();i++)
    {
        lim=(low/prime[i])*prime[i];
        if (lim<low)
            lim+=prime[i];
        if (lim==prime[i])
            lim+=prime[i];
        for (j=lim;j<=high;j+=prime[i])
            check[j-low]=1;
    }
    long long cnt=0;
    for (i=0;i<high-low+1;i++)
    {
        if (check[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
}

main()
{
    int sieve[1000001]={0};
    long long i,j;
    sieve[0]=1; sieve[1]=1;
    for (i=2;i<1000001;i++)
    {
        if (sieve[i]==0)
        {
            prime.push_back(i);
            for (j=2*i;j<1000001;j+=i)
                sieve[j]=1;
        }
    }
    int t,n;
    cin>>t;
    long long x,y;
    while (t--)
    {
        cin>>n;
        cin>>x>>y;
        lowA=x;
        highA=y;
        for (i=0;i<n-1;i++)
        {
            cin>>x>>y;
            intersection(x,y);
        }
        if (lowA!=-1 && highA!=-1)
            countPrimes(lowA,highA);
        else
            cout<<"-1\n";
    }
}

// #include <bits/stdc++.h>

// #define pb push_back
// #define fr first
// #define sc second
// #define MOD 1000000007
// #define MX 1000000
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
// #define test(n) cout<<"___"<<n<<"___\n";
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
// typedef unordered_map<int, int> mp;
// typedef unordered_map<ll, ll> mpl;

// #define cint(a) int a; cin>>a;
// #define cin(a) ll a; cin>>a;
// #define cin2(a,b) ll a,b; cin>>a>>b;
// #define cin3(a,b,c) ll a,b,c; cin>>a>>b>>c;
// #define vin(v,n) for(ll i=0; i<n;i++) cin>>v[i];
// #define vout(v,n) for(ll i=0; i<n;i++) cout<<v[i]<<" "; cout<<endl;

// vll pr;
// void SieveOfEratosthenes()
// {
//     ull n = MX;;
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));

//     for (ull p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // Print all prime numbers
//     for (ull p = 2; p <= n; p++)
//         if (prime[p])
//         {
//             pr.push_back(p);
//             // cout << p << " ";
//         }
//     // ull q = 0;
//     // n = pr.size();
// }

// void solve()
// {
//     cint(q); cin2(l,r);q--;
//     while(q--){
//         cin2(l1,r1);
//         if(l1>l)l=l1;
//         if(r1<r)r=r1;
//     }
//     if(l>r){cout<<-1;return;}
//     cout<<l<<" "<<r<<endl;
//     ll aa = lower_bound(all(pr),l)-pr.begin();
//     ll bb = upper_bound(all(pr),r)-pr.begin();
//     if(aa==bb && (pr[aa]==l || pr[aa]==r))cout<<1;
//     cout<<bb-aa;

// }

// int main()
// {
//     tez_chal_bsdk;
// #ifndef ONLINE_JUDGE
//     freopen("input1.txt", "r", stdin);
//     freopen("output1.txt", "w", stdout);
// #endif
//     SieveOfEratosthenes();

//     // solve();
//     cint(t);
//     while (t--)
//     {
//         solve();
//         cout << endl;
//     }

//     return 0;
// }

// // ctrl +  alt + F   :  format the code
// // ctrl + shift + B  :  build with
// // ctrl + B          :  build
// // ctrl + X          :  cut the line
// // ctrl +
