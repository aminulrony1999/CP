#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    string s;
    cin>>s;
    unordered_map<char,ll> m;
    for(ll i = 0; i < s.size(); ++i)
    m[s[i]]++;
    ll q;
    cin>>q;
    while(q--)
    {
        char ch;
        cin>>ch;
        cout<<m[ch]<<endl;
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