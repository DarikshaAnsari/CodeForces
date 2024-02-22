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
    cin>>n;
    vector<ll> v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    ll ans=-1;
    fr(i,0,n){
        ans=max(ans,v[i]);
        ll ans1=v[i];
        for(int j=i+2;j<n;j=j+2){
            ans1=max(ans1,v[i]+v[j]);
        }
        ans=min(ans,ans1);
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