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
    int n;
    cin >> n;
    vector<int> b(n),b_e,b_o;
    for (int i = 0; i < n; i++) 
    {
        cin>>b[i];
        
        if(b[i]%2==0) b_e.push_back(b[i]);
        
        else b_o.push_back(b[i]);
    }

    if(b_o.size()%2!=0)
    {
        cout<<"-1"<<endl;
        return;
    }

    sort(b_e.begin(), b_e.end());
    sort(b_o.begin(), b_o.end());
    
    vector<ll> fh;
    vector<ll> sh;

    int nn=b_e.size();
    for(int i=0;i<(nn/2);i++)
    {
        ll x=b_e[i]+b_e[i+nn/2];
        ll y=abs(b_e[i]-b_e[i+nn/2]);

        fh.push_back(x/2);
        sh.push_back(y/2);
    }

    nn=b_o.size();
     for(int i=0;i<(nn/2);i++)
    {
        ll x=b_o[i]+b_o[i+nn/2];
        ll y=abs(b_o[i]-b_o[i+nn/2]);

      fh.push_back(x/2);
        sh.push_back(y/2);
    }

//    int p=0;
//    int q=b_e.size()-1;
//    int j=0;
   
//    while(p<q)
//    {
//        int x=(b_e[p]+b_e[q])/2;
//        int y=(b_e[q]-b_e[p])/2;
//        a[j]=x;
//        a[j+(n/2)]=y;
//        j++;
//        p++;
//        q--;
//    }
   
   
//     p=0;
//     q=b_o.size()-1;
  
   
//    while(p<q)
//    {
//        int x=(b_o[p]+b_o[q])/2;
//        int y=(b_o[q]-b_o[p])/2;
//        a[j]=x;
//        a[j+(n/2)]=y;
//        j++;
//        p++;
//        q--;
//    }

for(auto i: fh)
{
    cout<<i<<" ";
}

for(auto i: sh)
{
    cout<<i<<" ";
}
    
    cout << endl;
}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
