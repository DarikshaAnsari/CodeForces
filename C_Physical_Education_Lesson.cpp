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
    ll n, x;
    cin >> n >> x;
    ll a = n - x;
    ll ans = 0;
    ll ans1 = 0;
    set<ll> st;
    for (ll i = 1; i * i <= a; i++)
    {

        if (a % i != 0)
        {
            continue;
        }
        else
        {
            if (((i + 2) / 2) >= x && i != 1 && ((i + 2) % 2 == 0))
            {
                st.insert(i);
            }
            else
            {
                ans++;
            }
            if (i * i != a && ((a / i + 2) / 2) >= x && (((a / i + 2) % 2) == 0))
            {
                st.insert(a / i);
            }
            else
            {
                ans--;
            }
        }
    }
    a = n + x - 2;
    for (ll i = 1; i * i <= a; i++)
    {
        if (a % i != 0)
        {
            continue;
        }
        else
        {
            if (((i + 2) / 2) >= x && i != 1 && ((i + 2) % 2 == 0))
            {
                st.insert(i);
            }
            else
            {
                ans++;
            }
            if (i * i != a && ((a / i + 2) / 2) >= x && ((a / i + 2) % 2 == 0))
            {
                st.insert(a / i);
            }
            else
            {
                ans--;
            }
        }
    }

    cout << st.size() << endl;
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