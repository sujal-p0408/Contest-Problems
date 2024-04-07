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
    for(ll i=0;i<n;i++) {
        cin>>v[i];
        v[i]=abs(v[i]);
    }

    int ans=*min_element(v.begin(),v.end());

    cout<<ans<<endl;
    return;
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