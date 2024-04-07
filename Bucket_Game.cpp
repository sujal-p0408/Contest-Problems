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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    int a_points=0;
    int b_points=0;

    for(int i=0;i<n;i++)
    {
       
          if(v[i]%2==0) b_points++;

          else a_points++;
    }

    if(a_points==b_points) cout<<"Draw"<<endl;
    else if(a_points>b_points) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
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