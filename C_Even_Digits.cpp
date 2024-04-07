#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int) (x).size()

const int mod = 1e9 + 7;
const int mod1 = 1e12;

bool good_int(ll ans)
{
    string digits = to_string(ans);

    for(ll i=0;i<digits.size();i++)
    {
        if(digits[i]%2!=0) return false;
    }
    return true;
}
ll find_good_int(ll n)
{
   ll cnt=0;
   ll ans = 0;
   while(cnt<n)
   {
    if(good_int(ans)) cnt++;

    ans=(ans%mod1+2%mod1)%mod1;
   }
   return (((ans%mod1)-(2%mod1))%mod1+mod1)%mod1;
}
void solve()
{
    ll n;
    cin>>n;
ll ans = find_good_int(n);
cout<<ans<<endl;
}
int main()
{
    fast;
    solve();
    
    return 0;
}