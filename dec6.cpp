#include <bits/stdc++.h>
#define FOR(i,a,n) for(ll i=a;i<n;i++)
#define endl "\n";
using namespace std;
typedef long long int ll;
#define cin(a) ll a; cin>>a;
#define vin(v,n) for(ll i=0; i<n;i++) cin>>v[i];

ll setno(ll n) { ll k = (ll)(log2(n)); return k; }

string subStringFun(string a)
{
    ll n = a.size();
    FOR(i, 0, n)
    {
        if (a[i] == '1')
            continue;
        ll c = 0;
        FOR(j, i + 1 , n)
        {
            if (a[j] - '0')
                c++;
            if (c == 2)
            {
                FOR(k, i, j + 1)
                {
                    swap(a[k], a[j]);
                    j--;
                }
                break;
            }
        }
    }
    return a;
}

void solve()
{

    string s;
    cin >> s;
    ll n = s.length();
    unordered_set<string> final_set;
    FOR(i, 0, n)
    {
        string temp = "";
        FOR(j, i, n)
        {
            temp += s[j];
            string ss = subStringFun(temp);
            if (final_set.find(ss) == final_set.end())
                final_set.insert(ss);
        }
    }
    cout << final_set.size() << "\n";
}

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
        solve();
    }//end of while
    return 0;
}