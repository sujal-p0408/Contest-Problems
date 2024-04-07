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
    ll n;
    cin>>n;
    ll temp= sqrt(n);
    if(n%2==1) temp++;

    cout<<temp/2<<endl;
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