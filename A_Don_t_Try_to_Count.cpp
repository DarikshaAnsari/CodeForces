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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int count=0;
    int cnt=6;
    while (cnt--)
    {
        if (x.find(s) != string::npos)
        {
           cout<<count<<endl;
           return;
        }
        x+=x;
        count++;
    }
    cout<<-1<<endl;
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