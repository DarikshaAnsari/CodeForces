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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<ll>> v;
        int n, column;
        ll a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> column;
            vector<ll> p;
            for (int j = 0; j < column; j++)
            {
                cin >> a;
                p.push_back(a);
            }
            sort(p.begin(), p.end());
            v.push_back(p);
        }
        ll ans = 0;
        int index=0;
        ll mini = 1e9;
        fr(i, 0, n)
        {
            if (mini > v[i][1])
            {
                mini = v[i][1];
                index = i;
            }
            ans += v[i][1];
        }
        ans -= v[index][1];
        mini=1e9;
        index=0;
         fr(i, 0, n)
        {
            if (mini > v[i][0])
            {
                mini = v[i][0];
                index = i;
            }
        }
        ans+=v[index][0];
        cout << ans << endl;
    }
    return 0;
}