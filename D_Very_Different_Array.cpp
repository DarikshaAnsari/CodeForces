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

void prefix(vector<ll> v, vector<ll> &ans)
{
    ans[0]=v[0];
    fr(i, 0, v.size())
    {
            ans[i] = ans[i-1] + v[i];
    }
}
void suffix(vector<ll> v, vector<ll> &ans)
{
    ans[v.size()-1]=v[v.size()-1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
            ans[i] = ans[i + 1] + v[i];
    }
}
void wushangclan()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    fr(i, 0, m)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<ll> suffix_a(n);
    vector<ll> suffix_b(m);
    suffix(a, suffix_a);
    suffix(b, suffix_b);

    vector<ll> prefix_a(n);
    vector<ll> prefix_b(m);
    prefix(a, prefix_a);
    prefix(b, prefix_b);
    ll ans = -1;

    for (ll i = 0; i <= n; i++)
    {
        ll npa = i;
        ll nna = n - i;
        ll npb = n - i;
        ll nnb = i;
        ll sum;
        if (i == 0)
        {
            sum = suffix_b[m - npb] - prefix_a[n - 1];
        }
        else if (i == n)
        {
            sum = suffix_a[0] - prefix_b[n - 1];
        }
        else
            sum = suffix_a[n - npa] + suffix_b[m - npb] - prefix_a[nna - 1] - prefix_b[nnb - 1];
        ans = max(sum, ans);
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