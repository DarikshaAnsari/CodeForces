#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

void wushangclan()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> hum(n, 0), tum(n, 0);
    unordered_map<int, int> mp;
    mp[0] = 1, mp[n - 1] = -1;
    for (int i = 1; i < n - 1; i++)
    {
        ll acha = abs(v[i] - v[i + 1]);
        ll hmm = abs(v[i] - v[i - 1]);
        if (acha <= hmm)
        {
            mp[i] = 1;
        }
        else
        {
            mp[i] = -1;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (mp[i] != 1)
        {
            tum[i] = tum[i + 1] + abs(v[i] - v[i + 1]);
        }
        else
        {
            tum[i] = tum[i + 1] + 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (mp[i] != -1)
            hum[i] = hum[i - 1] + abs(v[i] - v[i - 1]);
        else
            hum[i] = hum[i - 1] + 1;
    }
    ll qty;
    cin >> qty;
    while (qty)
    {
        ll x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << 0 << endl;
        }
        else if (x > y)
        {
            cout << hum[x - 1] - hum[y - 1] << endl;
        }
        else
        {
            cout << tum[x - 1] - tum[y - 1] << endl;
        }
        qty--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        wushangclan();
    }
    return 0;
}