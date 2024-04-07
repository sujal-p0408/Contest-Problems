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
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){ 
        cin>>v[i];
        um[v[i]]++;
    }
    if(um.size()==1)
    {
       cout<<"Yes"<<endl;
       return;
    }
    if(um.size()>2)
    {
        cout<<"No"<<endl;
        return;
    }
     
    for(auto i: um)
    {
        if(i.second == n/2)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return;
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

// second approach

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
    map<int,int> um; //using maps as we can't use rbegin() in unordered_maps
    for(int i=0;i<n;i++){ 
        cin>>v[i];
        um[v[i]]++;
    }
    
    if(um.size()>2)
    {
        cout<<"No"<<endl;
        return; 
    }
     
    if(abs(um.begin()->second - um.rbegin()->second)<=1)
    {cout<<"Yes"<<endl;
    return;}

    cout<<"No"<<endl;
    return;
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