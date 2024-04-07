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

void solve()
{
    ll n,p;
    cin>>n>>p;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<pair<ll,ll>> vp;
    for(ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    vp.push_back(make_pair(0, temp)); // Initialize first value of pair to 0
}

for(auto& i:vp) cin >> i.first; // Now you can read into the first value of each pair


    sort(vp.begin(),vp.end());

    ll ans=0;
    map<ll,ll> mp;
    mp[p]=n+100;  //for Pak
    for(auto&i:vp)
    {
        ll mn=(*mp.begin()).first;
        ans+=mn;
        mp[mn]--;
        mp[i.first]+=i.second;
        if(mp[mn]==0) mp.erase(mn);
    }


    cout<<ans<<endl;
       return;
}


int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif

    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
  return 0;
}