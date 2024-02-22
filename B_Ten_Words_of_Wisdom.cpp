#include<bits/stdc++.h>
#include <vector>
#include <queue>
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
      int n;
      cin>>n;
      priority_queue<pair<int,pair<int, int>>,vector<pair<int,pair<int, int>>>> a;
      REP(i,0,n-1){
        int p,q;
        cin>>p>>q;
        a.push({q,{p,i+1}});
      }
       while (!a.empty()) {
        pair<int,pair<int, int>> element = a.top();
        if(element.second.first<=10){
            break;
        }
        a.pop();
    }
    cout<<a.top().second.second<<endl;
   }
   return 0;
}