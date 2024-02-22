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
vector<int> arr(26, 0);

int searchValue(int x)
{
    fr(j, 0, 26)
    {
        if (arr[j] == x)
        {
            arr[j]++;
            return j + 97;
        }
    }
    return -1;
}
void wushangclan()
{
    int n;
    cin >> n;

    vi a(n);
    fr(i, 0, n)
    {
        cin >> a[i];
    }
    string ans = "";
    fr(j, 0, n)
    {
        ans += (char)searchValue(a[j]);
    }

    cout << ans << endl;

    arr = vector<int>(26, 0);
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
