
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
             cin>>v[i];
        }
        ll low=0,high=INT_MAX,ans=-1,count;
        while(low<=high){
            ll mid=(low+high)/2;
            count=0;
            for(ll i=0;i<n;i++){
                if(mid>v[i]){
                    count+=(mid-v[i]);
                }
            }
            if(count<=m){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}