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

 vi p;
 bool segment[1000009];

void SieveOfEratosthenes(int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
}

bool checkprime (long int num)
{
    if (num <=1)
        return false;
    else if (num == 2)        
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
      
        int upperLimit =sqrt(num) +1;
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                return false;
            divisor +=2;
        }
        return prime;
    }
}

void solve()
{

	cin2(a,b);
	FOR(i,a,b+1)
	if (checkprime(i))
		cout<<i<<endl;

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

//Efficint Solution

/*
//generate Prime using sieve
//segmented sieve
//limits the memory used, thus inside cache only hence speed up 


    #include <bits/stdc++.h>
 
    #define max1(x,y) (x)>(y)?(x):(y)
     
    #define s(n) scanint(n)
    #define sc(n) scanf(" %c",&n)
    #define sl(n) scanf("%ld",&n)
    #define sll(n) scanf("%lld",&n)
    #define sf(n) scanf("%lf",&n)
    #define ss(n) scanf("%s",n)
    #define INF (int)1e9
    #define EPS 1e-9
    #define bitcount __builtin_popcount
    #define gcd __gcd
    #define forall(i,a,b) for(int i=a;i<b;i++)
    #define all(a) a.begin(), a.end()
    #define pb push_back
    #define sz(a) ((int)(a.size()))
    #define mp make_pair
    #define checkbit(n,b) ( (n >> b) & 1)
    #define gc getchar_unlocked
    #define l long
  
    using namespace std ;

    inline void scanint(int &x)
    {
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    }


   vector<int > primeArray;

    bool check[50009];

    int keep = 1;


    void initialise()
    {
        check[1 ] = 1;
        for(int i = 3 ; i <=224 ; i+=2){
            if(!check[i]){
                for(int j = i*i ; j<= 50000 ; j+=2*i)
                    check[j] = true;
            }
        }
        primeArray.pb(2);
        keep=1;
        for(int i = 3 ; i<= 50000 ; i++)
            if(check[i] == false && (i&1))
                primeArray.pb(i) , keep++;
    }


    bool segment[1000009];



    int main()
    {
        int t;
        s(t);
        initialise();
        while(t--)
        {
            int a , b;
            s(a),s(b);

            if(b <= 50000){
                if(a<=2)
                    printf("2\n");
                for(int i = a ; i<= b ; i++){
                    if(check[i] == false && (i&1))
                        printf("%d\n", i);
                }
                continue;
            }

            memset(segment , 0 , sizeof segment);


            for(int i = 0; primeArray[i]*primeArray[i] <= b ; i++)
            {
                int begin = a/primeArray[i];
                begin *= primeArray[i];
                for(int j = begin ; j<= b ; j+= primeArray[i]){
                    if(j < a)
                        continue;
                    segment[j - a] = true;
                }
            }

            for(int i  = 0 ; primeArray[i]*primeArray[i] <= b ; i++){
                if(primeArray[i]>= a && primeArray[i]<=b)
                    printf("%d\n",primeArray[i]);
            }

            for(int i = a==1?1:0 ; i < b-a+1 ; i++)
                if(segment[i]==0)
                    printf("%d\n", i+a);
        }

        return 0;
    }
*/