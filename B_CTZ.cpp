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
    if(n&1) {cout<<"0"<<endl;
    return;}

    int count = 0;
    while ((n & 1) == 0) {
        count++;
        n >>= 1;
    }
    cout<<count<<endl;
}
int main()
{
    fast;
    solve();
    
    return 0;
}