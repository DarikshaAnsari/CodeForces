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

void wushangclan()
{
    int n,k;
    cin>>n>>k;
    string ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
           ans+=char(j+'a');
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        wushangclan();
    }
    return 0;
}