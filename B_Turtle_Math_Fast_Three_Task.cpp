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
   for(ll i=0;i<n;i++)
   {
    cin>>v[i];
   }
   
   ll sum = accumulate(v.begin(), v.end(), 0);
   
   ll cnt=0;
   for(ll i=0;i<n;i++)
   {
     
   }
   if(sum%3==0)
   {
    cout<<"0"<<endl;
    return;
   }

   
   for(int i=0;i<n;i++)
   {
     if((sum-v[i])%3==0)
     {
        cout<<"1"<<endl;
        return;
     }
   }

 cnt=0;

for(int i=0;i<n;i++)
{
   sum++;
   cnt++;
   if(sum%3==0)
   {
    cout<<cnt<<endl;
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