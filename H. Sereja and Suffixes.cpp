// H. Sereja and Suffixes

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<ll> ss;
    vector<ll> v(n);

    for (int i = n - 1; i >= 0; i--)
    {
        ss.insert(a[i]);
        v[i] = ss.size();
    }

    while (m--)
    {
        ll x;
        cin >> x;
        cout << v[x - 1] << endl;
    }
}

int main()
{
    fast;

    solve();

    return 0;
}