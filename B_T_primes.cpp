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
int  max_size = 1000001;
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
    
    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    return isPrime;
}
void solve()
{

     const int size = 1000001;
    vector<bool> isPrime = sieve(size);
    
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    for(ll i=0;i<n;i++){
        ll temp=sqrt(v[i]);
        if(temp*temp!=v[i])
        {
            cout<<"NO"<<endl;
        }
        else if(isPrime[temp])
        {
            cout<<"YES"<<endl;
           
        }
        else 
        cout<<"NO"<<endl;
    }
}
int main()
{
    fast;
    solve();
  return 0;
}


