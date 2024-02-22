#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<long, long> pi;
typedef unordered_map<ll, ll> mpp;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)
#define get(a)        \
    for (auto &i : a) \
    cin >> i
void wushangclan()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vl v(n);
    get(v);
    map<pi, int> mp;
    ll ans = 0;
    fr(i, 0, n)
    {
        ans += mp[{x - (v[i] % x), v[i] % y}];
        if ((v[i] % x )!= 0)
        {
            mp[{v[i] % x, v[i] % y}]++;
        }
        else
        {
            mp[{x, v[i] % y}]++;
        }
    }
    cout << ans << endl;
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