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

void solve(vector<int> & v, int k)
{
    int curr_sum=0;
    
    for(int i=0;i<k;i++)
    {
        curr_sum+=v[i];
    }
    int max_sum=curr_sum;
    for(int i=k;i<v.size();i++)
    {
      curr_sum= curr_sum+ v[i]-v[i-k];

       max_sum=max(max_sum,curr_sum);
    }

    cout<<max_sum<<endl;
}


int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif

    // int t=1;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k=3;
     solve(v,k);
  return 0;
}