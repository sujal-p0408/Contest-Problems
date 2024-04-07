
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
    cin>>n;
    vector<ll> arr(n,0);
    ll v[n]={0};

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

if(equal(arr.begin() + 1, arr.end(), arr.begin()))
{
    cout<<n*arr[0]<<endl;
    return;
}
    v[0]=arr[0];
    ll temp;
    ll cnt=1;
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        while(temp<=v[i-1])
        {
          cnt++;
           temp= arr[i]*cnt;
        //   arr[i]*=cnt;
        }

        cnt=1;
        v[i]=temp;
    }

  cout<<v[n-1]<<endl;
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