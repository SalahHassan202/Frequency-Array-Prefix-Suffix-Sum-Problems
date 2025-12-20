// G. Fence

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> pref(n + 1);

    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    ll ans = INT_MAX, idx = -1;
    for (int i = k; i <= n; i++)
    {
        ll x = pref[i] - pref[i - k];
        if (x < ans)
        {
            ans = x;
            idx = i - k + 1;
        }
    }
    cout << idx << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}