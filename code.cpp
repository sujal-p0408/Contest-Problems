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

bool solve(vector<int>& nums)
{
     map<int,int> m;
        
        for(auto i: nums)
        {
            m[i]++;
}
      for(auto i: nums)
      {
       if(m[i]>2) return false;
      }
        return true;
    }



int main()
{ 
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif
    int n;
    cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
   if(solve(v)) cout<<"1"<<endl;
   else cout<<"0"<<endl;
  return 0;
}