#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
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
    int n;
    cin >> n;

    vi a(n);
    fr(i, 0, n) { cin >> a[i]; }

    vi ans;
    ans.pb(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            ans.pb(1);
        }
        ans.pb(a[i]);
    }
    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';
    cout << '\n';
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