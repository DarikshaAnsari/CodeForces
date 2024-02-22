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
    vi v(n);
    get(v);
    int e = 0, o = 0;
    fr(i, 0, n)
    {
        if (v[i] & 1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    // cout << o << " " << e << endl;
    if (o % 2 == 0 && e % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if (o % 2 != 0 && e % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else if (o % 2 != 0 && e % 2 == 0)
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