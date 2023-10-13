#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x : v)
    cin>>x;
    //precomputation
    vector<ll> hash((v.size() + 1), 0);
    for(ll i = 0; i < n; ++i)
    {
        hash[v[i]] += 1;
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
/*
If we declare an arrrya globally, then the initial value of each element will be initialized as zero.
*/