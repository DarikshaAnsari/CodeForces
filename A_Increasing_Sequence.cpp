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
        int n;
        cin>>n;
        vector<long long> v(n);
        fr(i,0,n){
            cin>>v[i];
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
             if(i==0 && v[i]==1){
                v[i]++;
                ans.pb(v[i]);
             }
             else if(i==0 && v[i]>1){
                v[i]--;
                ans.pb(v[i]);
             }
             else{
                if(v[i-1]-v[i]>1){
                    v[i-1]++;
                    ans.pb(v[i-1]);
                }else if(v[i]-v[i-1]>1){
                    v[i-1]++;
                    ans.pb(v[i-1]);
                }
                else{
                    v[i]++;
                    ans.pb(v[i]);
                }
             }
        }
          fr(i,0,n){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}