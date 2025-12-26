// J. Black and White Stripe

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        vector<ll> pref(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
            {
                pref[i + 1] = 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            pref[i] += pref[i - 1];
        }
        ll ans = INT_MAX;
        for (int i = 1; i <= n - k + 1; i++)
        {
            ll res = pref[i + k - 1] - pref[i - 1];
            ans = min(ans, res);
        }
        cout << ans << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}