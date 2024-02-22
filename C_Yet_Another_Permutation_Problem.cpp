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
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    cout<<1<<" ";
    set<int> st;
    fr(i,2,n+1){
      st.insert(i);
    }
    while(st.size()!=0){
       int temp=*st.begin();
       cout<<temp<<" ";
       st.erase(temp);
       while(st.find(2*temp)!=st.end()){
         cout<<2*temp<<" ";
         temp=2*temp;
         st.erase(temp);
       }
    }
    cout<<"\n";
    }
    return 0;
}