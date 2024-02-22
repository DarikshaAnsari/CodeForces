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
        vector<vector<char>> v(11,vector<char>(11));
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                cin>>v[i][j];
            }
        }
        long long ans=0;
        int arr[10]={1,2,3,4,5,6,7,8,9,10};
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
               if(v[i][j]=='X'){
                   if(i<=5 && j<=5){
                    ans+=min(i,j);
                    }
                    else if(i<=5 && j>=5){
                        ans+=min(i,11-j);
                    }
                   else if(i>=5 && j<=5){
                        ans+=min(11-i,j);
                    }
                    else{
                        ans+=min(11-i,11-j);
                    }
               }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}