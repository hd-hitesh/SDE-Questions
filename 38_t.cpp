using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;
 
const int MX=10000002;
bool check[MX];
bool isSpecial[MX];
vector <int> prime;
 
void sieve()
{
     memset(check,true,sizeof(check));
     check[0]=false;
     check[1]=false;
     
     for(int i=2;i*i<=MX;i++)
     {
         for(int j=i*i;j<MX;j+=i)
         check[j]=false;
     }
     for(int i=0;i<MX;i++)
     {
         if(check[i]==true)
         prime.push_back(i);
     }
     
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    memset(isSpecial,false,sizeof(isSpecial));
    int t,n,i,j,k,p;
    cin>>p>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        i=0;
        if(isSpecial[n])
        {
             cout<<"YES\n";
             continue;
        }
        
        while(i<prime.size() && prime[i]<=n)
        {
            if(n%prime[i]==0)
            k++;
            i++;
        }
        
        if(k>=p){
            isSpecial[n]=true;
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
} 