#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(ll i = 0; i < n; ++i)
    cin>>v[i];
    map<ll,ll> m;
    for(ll i = 0; i < n; ++i )
    m[v[i]]++;
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        cout<<m[x]<<endl;
    }
}
int main()
{
    solve();
    return 0;
}