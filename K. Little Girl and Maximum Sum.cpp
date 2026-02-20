// K. Little Girl and Maximum Sum

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> freq(n + 1, 0);

    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;

        freq[l]++;

        if (r + 1 < n)
        {
            freq[r + 1]--;
        }
    }

    for (int i = 1; i < n; i++)
    {
        freq[i] += freq[i - 1];
    }

    freq.pop_back();

    sort(v.begin(), v.end());
    sort(freq.begin(), freq.end());

    ll ans = 0;

    for (int i = 0; i < n; i++)
        ans += v[i] * freq[i];

    cout << ans << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}