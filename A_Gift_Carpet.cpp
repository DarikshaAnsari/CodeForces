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
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        int mp[4];
        mp[0]='v';
        mp[1]='i';
        mp[2]='k';
        mp[3]='a';
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 char a;
                 cin>>a;
                 arr[i][j]=a;
            }
        }
        int x=0;
        int u=0;
        int ans=1;
        for(int i=0;i<m;i++){
            if(x>3){
                break;
            }
            for(int j=0;j<n;j++){
                if(arr[j][i]==mp[x]){
                    x++;
                    if(x>3){
                        ans=0;
                    }
                    break;
                }
            }
        }
        if(ans==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
    return 0;
}