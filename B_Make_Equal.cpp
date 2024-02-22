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
    int sum = 0;
    fr(i, 0, n)
    {
        sum += v[i];
    }
    int k = sum / n;
    int temp = 0;
    int ans = 0;
    fr(i, 0, n)
    {
        if (v[i] > k)
        {
            temp += v[i] - k;
        }
        else if (v[i] < k && temp >= k - v[i])
        {
            temp -= (k - v[i]);
        }
        else if (v[i] < k && temp < k - v[i])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            ans++;
        }
    }
    cout << "YES" << endl;
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