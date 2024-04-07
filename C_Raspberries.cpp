#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

#define endl "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define debug(x) cout << #x << " " << x << endl;

const int mod = 1e9 + 7;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll cnt_even = 0;
    ll ans = k;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % k == 0)
        {
            ans = 0;
        }

        if (v[i] % 2 == 0)
            cnt_even++;
        ans = min(ans, k - (v[i] % k));
    }

    if (k == 4)
    {
        if (cnt_even >= 2)
            ans = 0;
        else if (cnt_even == 1)
            ans = min(ans, (ll)1);
        else
            ans = min(ans, (ll)2);
    }

    cout << ans << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}