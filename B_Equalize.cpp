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
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define get(a)        \
    for (auto &i : a) \
    cin >> i
void wushangclan()
{
    int n;
    cin>>n;
    vl v(n);
    get(v);
    sort(v.begin(),v.end());
    queue<ll> q;
    vector<int> ans1;
    ll prev=-1,cnt=0,ans=0;
    ll k=0;
    fr(i,0,n){
        while(!q.empty()&& v[i]-q.front()>=n){
            q.pop();
            cnt--;
            k++;
        }
        if(prev!=v[i]){
            q.push(v[i]);
            cnt++;
        }
        ans=max(ans,cnt);
        prev=v[i];
        k--;
    }
    cout<<ans<<endl;
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