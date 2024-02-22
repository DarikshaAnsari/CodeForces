#include <bits/stdc++.h>
using namespace std;

#define int long long

using vi = vector<int>;
#define noni \
    int n;   \
    cin >> n
#define okk      \
    int tiii;    \
    cin >> tiii; \
    while (tiii--)
#define op                      \
    vi arr(n);                  \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]

void code()
{
    noni;
    op;
    if (n % 2 == 0)
    {
        cout << 2 << endl;
        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n << endl;
    }
    else
    {
        cout << 4 << endl;
        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n - 1 << endl;
        cout << n - 1 << ' ' << n << endl;
        cout << n - 1 << ' ' << n << endl;
    }
}

signed main()
{
    okk
    code();
    return 0;
}