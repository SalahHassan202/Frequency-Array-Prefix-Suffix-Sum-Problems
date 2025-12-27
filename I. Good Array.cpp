// I. Good Array

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    vector<ll> freq(10e6 + 3);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        freq[a[i]]++;
    }
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]--;
        ll x = sum - a[i];
        if (x % 2 == 0)
        {
            if ((x <= (10e6 + 3)) && freq[x / 2] != 0)
            {
                ans.push_back(i + 1); // position not index
            }
        }
        freq[a[i]]++;
    }

    cout << ans.size() << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    fast;

    solve();

    return 0;
}