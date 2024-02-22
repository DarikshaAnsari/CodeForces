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
        vi v(n);
        fr(i,0,n){
           cin>>v[i];
        } 
        sort(v.begin(),v.end());
        int ans=1;
        v[0]=v[0]+1;
        for(int i=0;i<n;i++){
            ans*=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}