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

    int cnt=0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != i + 1){
            cnt++;
            swap(v[i], v[v[i] - 1]);
            i--; 
        }
    }

    cout<<cnt<<endl;
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