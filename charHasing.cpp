#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    string s;
    cin>>s;
    vector<ll> hash(256,0);
    for(ll i = 0; i < s.size(); ++i)
    {
        hash[s[i] - 'a']++;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<hash[ch - 'a']<<endl;
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