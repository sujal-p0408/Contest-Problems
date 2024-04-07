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
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n+1);
   for(int i=1;i<=n;i++)
   {
    cin>>v[i];
   }
   int idx=0;
   int maxi=0;
   for(int i=1;i<=n;i++)
{
    if(v[i]>maxi) {
        maxi=v[i];
        idx=i;
       
    }
 v[i]-=k;
    if(v[i]<=0)
    {
        cout<<i<<" ";
    }

    if (std::all_of(v.begin(), v.end(), [](int i) { return i<=0; }))
    {
       return;
    }
}

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