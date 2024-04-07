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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    ll temp1 = v[0];
    ll temp2 = 0;
ll x=0;
ll j=0;
    for(ll i=1;i<n;i++)
    {
        temp1+=v[i];
        while(temp1>n)
        {
            temp1 -= v[i];
            x++;
        }
        temp2=temp1;
        j=x;
        while(x-j>0)
        {
            a[temp2-1]++;
            temp2 -= v[j];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]+1<<" ";
    }
}

int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.tx","w",stderr);
    #endif

    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
