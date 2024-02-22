#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
typedef unordered_map<ll, ll> mpp;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)

void wushangclan()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans2=n,ans1=0;
    for(int i=0;i<n;i++){
         if(s[i]=='B'){
            break;
         }
         ans1++;
    }
    for(int i=n-1;i>=0;i--){
         if(s[i]=='B'){
            break;
         }
         ans2--;
    }
    cout<<ans2-ans1<<endl;
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