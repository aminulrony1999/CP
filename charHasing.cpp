#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    string s;
    cin>>s;
    vector<ll> ma(s.size(),0);
    for(ll i = 0; i < s.size();++i )
    ma[i] = s[i];
    vector<ll> hash(100000,0);
    for(ll i = 0; i < s.size(); ++i)
    {
        hash[ma[i]] += 1;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        ll x = ch;
        cout<<hash[x]<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}