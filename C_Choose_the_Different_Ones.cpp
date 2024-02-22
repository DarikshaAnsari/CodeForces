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

void wushangclan()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vl a(n), b(m);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    fr(i, 0, m)
    {
        cin >> b[i];
    }
    set<ll> s1, s2;
    ll p = 0, q = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            s1.insert(a[i]);
        }
    }
    p = s1.size();
    for (int i = 0; i < m; i++)
    {
        if (b[i] <= k)
        {
            s2.insert(b[i]);
        }
    }
    q = s2.size();
    while (!s2.empty())
    {
        if (s1.find(*s2.begin()) == s1.end())
        {
            s1.insert(*s2.begin());
        }
        else
        {
            r++;
        }
        s2.erase(s2.begin());
    }
    if (s1.size() != k)
    {
        cout << "NO" << endl;
    }
    else if (p < k / 2 || q < k / 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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