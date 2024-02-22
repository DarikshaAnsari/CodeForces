#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vll;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        fr(i, 0, n) 
        {
            cin >> v[i];
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll l, k;
            cin >> l >> k;
            ll r = l;
            ll currentAnd = v[l - 1];

            while (r < n && currentAnd >= k)
            {
                ll nextAnd = currentAnd & v[r];
                if (nextAnd >= k)
                {
                    currentAnd = nextAnd;
                    r++;
                }
                else
                {
                    break;
                }
            }
            if (currentAnd < k)
            {
                cout << -1 << " ";
            }
            else
            {
                cout << r << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}