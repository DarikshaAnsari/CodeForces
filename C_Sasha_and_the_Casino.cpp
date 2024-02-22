#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<long long> VL;
typedef pair<int, int> PI;
typedef unordered_map<LL, LL> MPP;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)
#define get(a)        \
    for (auto &k : a) \
    cin >> k

void solve()
{
    LL k_val, x_val, a_val;
    cin >> k_val >> x_val >> a_val;
    long long coins = 0;
    int i = 0;
    int can_bet = 1;
    while (i < x_val && can_bet)
    {
        if ((coins + k_val - 1) / (k_val - 1) == 0)
        {
            coins += 1;
        }
        else
        {
            coins += (coins + k_val - 1) / (k_val - 1);
        }
        can_bet = coins <= a_val;
        i++;
    }
    if ((k_val * (a_val - coins) <= a_val))
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
    int t_cases;
    cin >> t_cases;
    while (t_cases--)
    {
        solve();
    }
    return 0;
}
