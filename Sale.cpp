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
    }

    ll max=v[0]*2;
    ll sum=v[0];

    for(int i=1;i<n;i++)
    {
        ll sum2 = v[i];
        ll max2 = sum2*2;

        ll temp = sum+max2;

        if(temp>max)
        max=temp;

        sum+=sum2;
    }

    cout<<max<<endl;
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