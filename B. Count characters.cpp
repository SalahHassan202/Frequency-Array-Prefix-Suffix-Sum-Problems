// B. Count characters

#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std ;

void solve()
{
    string s ; cin >> s ;
    vector<ll>freq(123);   // 123 ==> 122 +1 ===> Z=90 , z = 122  
    for(int i=0;i<s.size() ; i++)
    {
        freq[s[i]]++;
    }

    for(char i ='A' ; i<='Z' ;i++)
    {
        if(freq[i]!=0)
        cout << i << " " << freq[i] <<endl;
    }

    for(char i ='a' ; i<='z';i++)
    {
        if(freq[i]!=0)
        cout << i << " " << freq[i] <<endl;
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