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
string toBinary(int num) {
    string binary;
    for(int i = 31; i >= 0; i--) {
        binary += ((num >> i) & 1) ? '1' : '0';
    }
    return binary;
}
void solve()
{
   int a,b;
   cin>>a>>b;
   string abin=toBinary(a);
   string Bbin=toBinary(b);
   
   int n = abin.size();
   int cnt=0;
   for(int i=0;i<n;i++)
   {
     if(abin[i]!=Bbin[i]) cnt++;
   }
   cout<<cnt<<endl;
}
int main()
{
    fast;
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
  return 0;
}