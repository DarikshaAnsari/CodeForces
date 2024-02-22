#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      if(n==2 || n==3){
          cout<<-1<<endl;
      }
      else{
      vector<int> ans(n,0);
      ans[n-3]=n;
      int i=n-4;
      int m=n-1;
      while(i>=0){
          ans[i]=m;
          m--;
          i--;
      }
      i=n-2;
      m=1;
      while(i<n){
          ans[i]=m;
          m++;
          i++;
      }
      for(int i=0;i<ans.size();i++){
          cout<<ans[i]<<" ";
      }
      cout<<endl;
      }
    }
    return 0;
}
