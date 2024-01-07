#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(ll i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    ll x = 13;
    vector<ll> hash(x,0);
    for(ll i = 0; i < n; ++i)
    {
        hash[v[i]]++;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
}
int main()
{
    solve();
    return 0;
}