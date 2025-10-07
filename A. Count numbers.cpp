// A. Count numbers

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n , q ; cin >> n >> q ;
    vector<ll>freq(n+1) ; 
    while(q--)
    {
        ll a , b ; 
        cin >> a >> b ; 
        if(a == 1) freq[b]++;
        else cout << freq[b] << endl;

    }

}
int main()
{
    fast;
    
    ll t = 1 ;
    // cin >> t ;
    while(t--)
    {
        solve();
    }
  
    
    return 0 ;
}