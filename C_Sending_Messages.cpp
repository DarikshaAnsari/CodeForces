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
    int n;
    ll f, a, b;
    cin >> n >> f >> a >> b;
    vector<ll> v(n);
    fr(i, 0, n)
    {
        cin >> v[i];
    }
    bool ans = false;
    int unit = 0;
    fr(i, 0, n)
    {
        ll m = v[i] - unit;
        m *= a;
        m = min(m, b);
        if (f > m)
        {
            unit = v[i];
            f -= m;
            ans = true;
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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