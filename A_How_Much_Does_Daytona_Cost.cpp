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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    bool flag=false;
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==k)
        {
            flag=true;
            break;
        }
    }
    
if(flag)
{
    cout<<"YES"<<endl;
    return;
}
cout<<"NO"<<endl;
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