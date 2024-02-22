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
    ll a,b;
    cin>>a>>b;
    vector<ll> v;
    for(ll i=1;i<a*b;i++){
        if(i%(a*b)==0){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    if(a>b){
        int it=upper_bound(v.begin(), v.end(),a)-v.begin();
        cout<<v[it]<<endl;
    }else{
         auto it=upper_bound(v.begin(), v.end(),b)-v.begin();
        cout<<v[it]<<endl;
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