
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
const int MOD = 998244353;
ll power(ll a, ll b)
{
    if(b==0) return 1;
     
    //  a%=MOD;
    
    ll half_power = power(a,b/2)%MOD;

    if(b%2==0) return (half_power*half_power)%MOD;

    else 
    return ((half_power*half_power)%MOD)*(a%MOD)%MOD;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans = power(2,n-1);
    cout<<power(ans,k)<<endl;
}


int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.tx","w",stderr);
    #endif

    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
  return 0;
}