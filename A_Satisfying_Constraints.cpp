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
    cin >> n;
    int lt = 1, rt = INT_MAX;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            lt = max(x, lt);
        }
        else if (a == 2)
        {
            rt = min(x, rt);
        }
        else if(a==3)
        {
            st.insert(x);
        }
    }
    long long int ans = rt - lt + 1;
    ans = max(0ll, ans);
    for (auto it : st)
    {
        if (it >= lt and it <= rt)
        {
            ans--;
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