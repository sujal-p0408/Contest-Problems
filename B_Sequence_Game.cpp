#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()
#define debug(x)            cout<< #x << " " << x <<endl;

const int mod = 1e9 + 7;

void solve()
{
   ll n;
   cin>>n;
   vector<ll> v(n);
   for(ll i=0;i<n;i++) cin>>v[i];
  
  vector<ll> ans;
  ans.push_back(v[0]);
   for(ll i=1;i<n;i++)
   {
     if(v[i]<v[i-1])
     {
       ans.push_back(1);
     }
     
    //  if(v[i]<v[i-1])  // this can be also done to get the output
    //  {
    //   if(v[i]==1)
    //    ans.push_back(1);

    //    else ans.push_back(v[i]-1);
    //  }

     ans.push_back(v[i]);
   }
   cout<<ans.size()<<endl;
   for(auto i: ans)
   {
    cout<<i<<" ";
   }
   cout<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
  return 0;
}