#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<ll, ll> pi;
typedef unordered_map<ll, ll> mpp;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define get(a)        \
    for (auto &i : a) \
    cin >> i
ll nc2(ll n)
{
    ll hue = (n * (n - 1)) / 2;
    return hue;
}
void wushangclan()
{
    ll n, b, x;
    cin >> n >> b >> x;
    vl v(n);
    get(v);
    sort(v.begin(), v.end());
    map<int, int> mp;
    fr(i, 0, n)
    {
        mp[v[i]]++;
    }
    set<int> st;
    vector<pi> ans1;
    for (auto it : mp)
    {
        ans1.push_back({it.first, it.second});
    }
    ll ans = 0;

    for (ll i = 1; i <= ans1.back().first; i++)
    {
        ll k = i;
        ll curr_ans = 0;
        ll ans2 = 0;
        fr(j, 0, ans1.size())
        {
            if (ans1[j].first > k)
            {
                ll ind = ans1[j].first / k;
                ll left = ans1[j].first % k;
                ll hue = (ans1[j].first * (ans1[j].first - 1)) / 2 - (left * nc2(ind + 1)) - ((k - left) * (nc2(ind)));
                curr_ans += (b * hue * ans1[j].second);
            }
            else
            {
                curr_ans += (b * (ans1[j].first * (ans1[j].first - 1)) / 2 * ans1[j].second);
                ans2++;
            }
        }
        curr_ans -= ((k - 1) * x);
        ans = max(ans, curr_ans);
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