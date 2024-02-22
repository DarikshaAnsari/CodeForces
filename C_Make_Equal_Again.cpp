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
    cin>>n;
    vi v(n);
    get(v);

    int s=0,e=0;
    int ans=0;
    while(s<n && v[s]==v[0]){
        s++;
        if(s==0){
            ans++;
        }
    }
    while(e<n && v[n-e-1]==v[n-1]){
        e++;
        if(e==0){
            ans++;
        }
    }
    if(v[0]==v[n-1] &&s+e>=n){
            cout<<0<<endl;
    }else if(v[0]==v[n-1] && s+e<n){
            cout<<n-s-e<<endl;
    }else{
        cout<<n-max(s,e)<<endl;
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