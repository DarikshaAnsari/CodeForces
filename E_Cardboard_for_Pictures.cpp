#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)

ll solve(ll mid,vi v,int n,ll c){
      ll ans=0;
      REP(i,0,n-1){
         ans+=((v[i]+2*mid)*(v[i]+2*mid));
         if(ans>c){
            break;
         }
      }
      return ans;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    ll c;
    cin>>n>>c;
    vi v;
    REP(i,0,n-1){
        int m;
        cin>>m;
        v.PB(m);
    }
    ll low=1,high=1e9;
    while(low<=high){
        ll mid=low+((high-low)/2);
        ll ans=solve(mid,v,n,c);
        if(ans==c){
            cout<<mid<<endl;
            break;
        }
        else if(ans<c){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
   }
   return 0;
}