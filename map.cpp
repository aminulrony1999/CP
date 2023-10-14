#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(auto &x : v)
    cin>>x;
    map<ll,ll> mp;
    //pre computation
    for(ll i = 0; i < n; ++i)
    mp[v[i]]++;
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        cout<<mp[x]<<endl;
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