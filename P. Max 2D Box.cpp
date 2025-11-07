// P. Max 2D Box

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
   ll n , m , x , y ;    cin >> n >> m >> x >> y ;
   vector<vector<ll>>v(n+1 , vector<ll> (m+1 , 0 )) ;
   for(int i = 1 ; i<=n ; i++)
   {
        for(int j = 1 ; j <=m ; j++)
        {
            cin >> v[i][j] ; 
        }
   }
   
   vector<vector<ll>> pref(n+1 , vector<ll>(m+1 , 0));

   for(int i = 1 ; i<=n ; i++)
   {
        for(int j = 1 ; j <=m ; j++)
        {
            pref[i][j] = v[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
   }

   ll ans = LLONG_MIN;       //  (−10^9≤ai≤10^9) 
    for(int i = x ; i<=n ; i++)
   {
        for(int j = y ; j <=m ; j++)
        {
            ll sum = pref[i][j] - pref[i-x][j] - pref[i][j-y]+pref[i-x][j-y] ;
            ans = max(ans, sum) ; 
        }
   }
   cout << ans << endl;
   
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
