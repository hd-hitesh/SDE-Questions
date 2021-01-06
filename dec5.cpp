#include <bits/stdc++.h>
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define endl "\n";
using namespace std;
typedef long long int ll;
#define cin(a) ll a; cin>>a;
#define vin(v,n) for(ll i=0; i<n;i++) cin>>v[i];

ll setno(ll n) { ll k = (ll)(log2(n)); return k; }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    ll t; cin >> t;
    while (t--)
    {

        ll n, k, z = 0;
        cin >> n >> k;
        ll a[n];
        vin(a,n);
        // FOR(i, 0, n)
        // cin >> a[i];
        ll tmp = 0;
        for (ll i = 1; i <= k; i++)
        {
            ll hn = setno(a[tmp]);
            ll t2 = 0, t3 = pow(2, hn);
            for (ll j = tmp + 1; j < n; j++)
            {
                if (((a[j]) & (t3)) == t3)
                {
                    t2 = j;
                    break;
                }
                else if (j == n - 1)
                {
                    t2 = n - 1;
                    break;
                }
            }
            a[tmp] = a[tmp] ^ t3;
            a[t2] = a[t2] ^ t3;
            if (n > 2)
                z = 1;
            if (a[tmp] == 0)
            {
                tmp += 1;

                while (a[tmp] == 0)
                {
                    if (tmp == n - 1)
                        break;
                    tmp += 1;
                }
                if (tmp == n - 1)
                {
                    if ((k - i) % 2 == 1)
                    {
                        if (n == 2 || z == 0)
                        {
                            a[n - 1] = a[n - 1] ^ 1;
                            a[n - 2] = a[n - 2] ^ 1;
                        }
                        break;
                    }
                    else
                        break;
                }
            }
        }

        FOR(i, 0, n) cout << a[i] << " ";

        cout << "\n";

    }//end of while
    return 0;
}