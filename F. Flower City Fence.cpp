// F. Flower City Fence

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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] > n)
        {
            cout << "NO\n";
            continue;
        }

        vector<ll> pref(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            pref[a[i]]++;
        }

        for (int i = n - 1; i >= 1; i--)
        {
            pref[i] += pref[i + 1];
        }

        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            if (pref[i] != a[i - 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    fast;
    solve();
    return 0;
}
