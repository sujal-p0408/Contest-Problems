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
    ll n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int cnt=0;
    int i=0;
    while( i<=5)
    {
      if(x.find(s)!= string::npos)
      {
        cout<<cnt<<endl;
        return;
      }
      cnt++;
      x=x+x;
      i++;
    }
    cout<<"-1"<<endl;
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