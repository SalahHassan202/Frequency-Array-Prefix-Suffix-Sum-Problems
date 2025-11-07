// C. Range sum query

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n , q ;    cin >> n >> q ;
    vector<ll>v(n) ;
    for(int i=0;i<n ;i++) cin >>v[i];
    ll pre[n] ;
    ll sum = 0 ;
    for(int i=0;i<n ;i++)
    {
        sum+=v[i] ;
        pre[i] = sum ;
    }
    while(q--)
    {
        ll l , r ;
        cin >>  l >> r ;
        l--;  r--;
        if(l == 0 )
        cout<< pre[r] << endl;
        else
        cout << pre[r] - pre[l-1] << endl;
        
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
