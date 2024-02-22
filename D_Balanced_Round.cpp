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


int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vi v;
    REP(i,0,n-1){
         int p;
         cin>>p;
         v.PB(p);
    }
    sort(v.begin(),v.end());
    int ans=1;
    int m=1;
    REP(i,1,n-1){
       if(v[i]-v[i-1]>k){
          ans=max(ans,m);
          m=1;
       }
       else{
       m++;
       }
    }
    ans=max(ans,m);
    cout<<v.size()-ans<<endl;
   }
   return 0;
}