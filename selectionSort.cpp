#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    ll n;
    cin>>n;
    vector<ll> num(n);
    for(auto &x : num)
    cin>>x;
    for(ll i = 0; i < n; ++i)
    for(ll j = i + 1; j < n; ++j)
    {
        if(num[i] > num[j])
        {
            swap(num[i], num[j]);
        }
    }
    cout<<"Elements of the array after swapping : ";
    for(auto &x : num)
    cout<<x<<" ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}