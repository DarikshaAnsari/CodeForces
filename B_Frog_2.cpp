#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for (int i = a; i < b; i++)


int main(){
   int n,k;
   cin>>n>>k;
   vector<int> v;
   fr(i,0,n){
    int m;
    cin>>m;
    v.pb(m);
   }
   vector<int> dp(n);
   dp[0]=0;
   for(int i=1;i<n;i++){
    int mini=INT_MAX;
      for(int j=1;j<=k;j++){
        if(i-j>=0){
        mini=min(mini,dp[i-j]+abs(v[i]-v[i-j]));
        }
      }
      dp[i]=mini;
   }
   cout<<dp[n-1]<<endl;
   return 0;
}