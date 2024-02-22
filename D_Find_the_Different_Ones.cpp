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
    int n;
    cin >> n;
    vi v(n);
    fr(i, 0, n)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    set<int> s;
    vi t(n);
    int ans=0;
    fr(i, 1, n)
    {
        if (v[i] == v[i - 1])
        {
            ans++;
            continue;
        }
        else
        {
            s.insert(i + 1);
        }
    }
    unordered_map<int,int> mp;
    fr(i, 0, q)
    {
        int l, r;
        cin >> l >> r;
        auto it = s.upper_bound(r);
        if (it == s.begin())
        {
            mp[l]=0;
            cout << -1 << " " << -1 << endl;
            continue;
        }
        it--;
        if (*it - 1 < l)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << *it - 1 << " " << *it << endl;
        }
    }
    cout << endl;
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