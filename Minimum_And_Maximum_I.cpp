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
    ll new_no = n/2;

    ll temp = new_no*(new_no+1);

    if(n%2==1)
    {
        temp+=(n/2)+1;
    }

    cout<<temp<<endl;


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