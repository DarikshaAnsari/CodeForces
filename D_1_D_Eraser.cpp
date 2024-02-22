#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define for(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int i=0;
        while(i<s.length()){
            if(s[i]=='B'){
                ans++;
                i=i+k;
            }
            else{
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}