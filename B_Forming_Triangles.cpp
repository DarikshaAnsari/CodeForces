#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (ll i = a; i < b; i++)

void wushangclan()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    fr(i,0,n) cin >> v[i];
    sort(v.begin(),v.end());
    map<ll, ll> mp;
    ll sum = 0;
    fr(i,0,n)
    {
        if (mp[v[i]] > 0)
        {
            sum += ((i- mp[v[i]]) * (mp[v[i]]));
        }

        if (mp[v[i]] > 1)
        {
           
            sum +=((mp[v[i]]*(mp[v[i]]-1))/2);
        }
        mp[v[i]]++;
    }
    cout << sum << endl;
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