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
    int n;
    cin>>n;
    string s,f;
    cin>>s>>f;
    int ans1=0;
    int ans2=0;
    fr(i,0,n){
        if(s[i]=='0' && f[i]=='1'){
            ans1++;
        }
        if(s[i]=='1' && f[i]=='0'){
            ans2++;
        }
    }
    cout<<max(ans1,ans2)<<endl;

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