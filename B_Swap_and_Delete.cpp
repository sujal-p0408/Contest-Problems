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
    string s;
    cin>>s;
    int cnt1=0;
    int cnt0=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }
    
    if(s.size()==1) {
        cout<<"1"<<endl;
        return;
    }
    if(cnt1==cnt0) {
        cout<<"0"<<endl;
        return;
    }
    int i=0;
    for(;i<s.size();i++)
    {
      if(s[i]=='1')
      {
        if(cnt0) cnt0--;
        else break;
      }

      else{
        if(cnt1) cnt1--;
        else break;
      }
    }

    cout<<cnt1+cnt0<<endl;
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