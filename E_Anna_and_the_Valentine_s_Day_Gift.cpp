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
int length(int p)
{
    return int(log10(p) + 1);
}
int pad(int p)
{
    int z = 1, r = 0;
    while (p % (z *= 10) == 0)
    {
        ++r;
    }
    return r;
}
bool compare(int i, int j)
{
    if(pad(i) < pad(j)){
        return true;
    }
    return false;
}
void wushangclan()
{
    int n, m;
    cin >> n >> m;
    vi v(n);
    get(v);
    sort(v.begin(), v.end(), compare);
    int ans = 0;
    int k = 0;
    unordered_map<int,int> mp;
    for(auto it : mp){
        k++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        ans += length(v[i]);
        if (i % 2 != (n - 1) % 2)
        {
            k++;
        }
        else
        {
            ans -= pad(v[i]);
        }
    }
    if(ans<=m){
        cout<<"Anna"<<endl;
    }else{
        cout<<"Sasha"<<endl;
    }
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