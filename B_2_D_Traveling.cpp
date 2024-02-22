#include <bits/stdc++.h>
using namespace std;

#define int long long

using pii = pair<int, int>;
using vi = vector<int>;
#define tdm      \
    int biru;    \
    cin >> biru; \
    while (biru--)

int dist(pii p1, pii p2)
{
    return abs(p1.first - p2.first) + abs(p1.second - p2.second);
}

void codethis()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pii> v(1, {0, 0});
    for (int i = 0; i < n; i++)
    {
        int c, d;
        cin >> c >> d;
        v.push_back({c, d});
    }

    int api = LLONG_MAX, bpl = LLONG_MAX;
    for (int i = 1; i <= k; i++)
    {
        api = min(api, dist(v[i], v[a]));
        bpl = min(bpl, dist(v[i], v[b]));
    }
    int res = dist(v[a], v[b]);
    if (api == LLONG_MAX)
        cout << res << endl;
    else
        cout << min(api + bpl, res) << endl;
}

signed main()
{
    tdm
    codethis();
    return 0;
}