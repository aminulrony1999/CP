#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n, 0);
    for (auto &x : v)
        cin >> x;
    for (ll i = n - 1; i > 0; i--)
    {
        ll swapDone = 0;
        for (ll j = 0; j < i; ++j)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                swapDone = 1;
            }
        }
        if(swapDone == 0)
        break;
    }
    cout << "After Using Bubble sort technique, the sorted elements are : ";
    for (auto &x : v)
        cout << x << " ";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}