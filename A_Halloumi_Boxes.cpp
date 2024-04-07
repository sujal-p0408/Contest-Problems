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
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {

        cin>>v[i];
    }
    vector<ll> u(n);
    u=v;
    sort(v.begin(),v.end());
    if(k>1 || u==v)  //for all k>=2 it is possible to sort the array as k=size to be selected to sort not the number of times it should be swapped
    {
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
    return;
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