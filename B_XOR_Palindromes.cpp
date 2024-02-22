#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void codedd()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            cnt++;
    string strt = "";
    int duplicate = cnt;
    while (cnt--)
        strt += '0';
    string ans = strt;
    if (n % 2)
    {
        int x = n + 1 - 2 * duplicate;
        while (x--)
            ans += '1';
        ans += strt;
    }
    else
    {
        int x = n + 1 - 2 * duplicate;
        x /= 2;
        while (x--)
            ans += "10";
        ans += '1';
        ans += strt;
    }
    cout << ans << endl;
}

signed main()
{
    tc
    codedd();
    return 0;
}