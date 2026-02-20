// L. Karen and Coffee

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

const int mx = 200000;

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(mx + 2, 0);

    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;

        v[l]++;
        v[r + 1]--;
    }

    for (int i = 1; i <= mx; i++)
    {
        v[i] += v[i - 1];
    }

    vector<ll> pref(mx + 2, 0);

    for (int i = 1; i <= mx; i++)
    {
        if (v[i] >= k)
        {
            pref[i] = 1;
        }
    }

    for (int i = 1; i <= mx; i++)
    {
        pref[i] += pref[i - 1];
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;

        cout << pref[b] - pref[a - 1] << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}