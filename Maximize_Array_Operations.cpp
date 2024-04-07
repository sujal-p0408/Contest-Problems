
#include<bits/stdc++.h>
using namespace std;

#define md                  1000000007
#define pb                  push_back
#define endl                " \n"
#define F                   first
#define S                   second
#define sz(x)               (int)(x).size()   
#define inp(v)              for(auto &x: v) cin>>x  
#define all(x)              (x).begin(), (x).end()
#define rep(i, a, b)        for (int i = a; i < (b); ++i)
#define fast_io             cin.tie(0)->sync_with_stdio(0);cin.exceptions(cin.failbit);
#ifndef ONLINE_JUDGE 
#define debug(x)            cout<< #x << " " << x <<endl;
#else
#define debug(x)
#endif

using ll  = long long;
using ull = unsigned long long;
using lld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vl  = vector<ll>;
using vi  = vector<int>;

ll cnt=0;
void solve(vector<ll> v,int n)
{
    for(ll i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {
            cout<<cnt<<endl;
            return;
        }
    }
cnt++;
for(ll i=0;i<n;i++)
{
    v[i]=v[i]/2;
}
solve(v,n);
   } 



int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.tx","w",stderr);
    #endif

    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solve(v,n);
  return 0;
}