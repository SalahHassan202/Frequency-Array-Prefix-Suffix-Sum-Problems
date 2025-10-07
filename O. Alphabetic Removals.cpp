// O. Alphabetic Removals

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    ll n , k ; cin >> n >> k ; 
    string s ; cin >> s ;
    ll freq[26] ={} ;    // 0 0 0 0 0 0 0 0 0 ....... 0  ==>// 26 zeros
    for(int i =0 ;i<s.size() ; i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i = 0 ; i<26 ; i++)
    {
        if(freq[i] > k)
        {
            freq[i]-=k ;
            k = 0;
        }
        else
        {
            k-=freq[i] ;
            freq[i]=0;
        }
    }
    
    bool  del[n] ={}; 
    for(int i =n-1 ; i>=0 ; i--)
    {
        if(freq[s[i]-'a'])  freq[s[i]-'a']--;
        else del[i] = 1 ;
        
    }
   for(int i = 0 ; i< n ;i++)
   {
        if(!del[i])
        cout <<s[i];
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