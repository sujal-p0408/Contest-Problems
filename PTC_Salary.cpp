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
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
        // if((v[i]%2)!=0)
        // {
        //     v[i]=v[i]-1;
        // }
    }
int mini=*min_element(v.begin(),v.end());
int sum=accumulate(v.begin(),v.end(),0);
int ans=sum/mini;
cout<<ans<<endl;
}
int main()
{
    fast;
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
  return 0;
}