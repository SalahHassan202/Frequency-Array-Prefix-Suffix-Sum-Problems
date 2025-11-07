// D. Update range

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n , q ;     cin >> n >> q ; 
    vector<ll>v(n) ;
    for(int i = 0 ;i<n ;i++) cin>>v[i] ;

    vector<ll>diff(n+1);
    while(q--)
    {
        ll l , r , v ;
        cin >> l >> r >> v ;
        l-- , r-- ;
        diff[l]+=v ;
        diff[r+1]-=v ;

    }
    ll pref[n] ;
    pref[0] = diff[0] ;
    for(int i = 1 ; i <n ; i++)
    {
        pref[i] = pref[i-1]+diff[i] ; 
    }
    for(int i = 0 ; i<n ; i++)
    {
        cout << v[i] + pref[i] << " " ; 
    }
    
    cout << endl; 

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
