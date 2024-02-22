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
    unordered_map<int,int> mp;
    string ans = "zzzz";
    vector<int> v;
    int dummy = 0;
    fr(i, 0, 26)
    {
        fr(j, 0, 26)
        {
            fr(k, 0, 26)
            {
                int p = i + j + k + 3;
                if (p != n)
                {
                    dummy++;
                }
                else
                {
                    string s = "";
                    s += ('a' + i);
                    s += ('a' + j);
                    s += ('a' + k);
                    ans = min(ans, s);
                }
            }
        }
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