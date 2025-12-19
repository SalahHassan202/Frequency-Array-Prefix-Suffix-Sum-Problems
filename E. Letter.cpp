// E. Letter

#include <bits/stdc++.h>
#define ll long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
using namespace std;

void solve()
{
    string n;
    getline(cin, n);
    string k;
    getline(cin, k);
    ll freq1[26] = {0};
    ll freq2[26] = {0};

    for (char c : n)
    {
        if (c == ' ')
            continue;

        if (c >= 'a' && c <= 'z')
            freq1[c - 'a']++;
        else
            freq2[c - 'A']++;
    }

    for (char c : k)
    {
        if (c == ' ')
            continue;

        if (c >= 'a' && c <= 'z')
        {
            if (freq1[c - 'a'] == 0)
            {
                cout << "NO";
                return;
            }
            freq1[c - 'a']--;
        }
        else
        {
            if (freq2[c - 'A'] == 0)
            {
                cout << "NO";
                return;
            }
            freq2[c - 'A']--;
        }
    }

    cout << "YES";
}

int main()
{
    fast;

    solve();

    return 0;
}