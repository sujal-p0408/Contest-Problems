#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

const int mod = 1e9 + 7;

void solve()
{
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll max_cnt=1;
    ll curr_cnt=1;
    for(ll i=1;i<n;i++)
    {
      if(s[i]==s[i-1]) curr_cnt++;

      else curr_cnt=1;

      max_cnt=max(max_cnt,curr_cnt);
    }
    cout<<max_cnt<<" ";

    while(q--)
    {
        char c;
        cin>>c;
        s+=c;
        
        if(c==s[n-1]) curr_cnt++;

        else curr_cnt=1;

  max_cnt=max(max_cnt,curr_cnt);
  n++;

      cout<<max_cnt<<" ";
    }
    cout<<endl;
}
int main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}