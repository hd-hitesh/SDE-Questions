#include <bits/stdc++.h>
using namespace std;
 
int t, n, a[300001], p, q;
 
int main() {
  cin>>t;
  while (t--) {
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    for (p=0; p<n; p++) if (a[p]<p) {p--; break;}
    for (q=n-1; q>=0; q--) if (a[q]<n-q-1) {q++; break;}
    if (p<q) cout<<"No\n";
    else cout<<"Yes\n";
  }
}