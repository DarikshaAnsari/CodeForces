#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)

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
        if(k%2==0){
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
        vector<vi> count(26,vi(2,0));
        for(int i=0;i<n;i++){
            count[s[i]-'a'][i%2]++;
        }
        string ans="";
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
              if(count[j][i%2]>0){
                count[j][i%2]--;
                ans+=(j+'a');
                break;
              }
            }
        }
        cout<<ans<<endl;
        }
    }
    return 0;
}