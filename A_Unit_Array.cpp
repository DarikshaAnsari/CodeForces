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
#define get(a)        \
    for (auto &i : a) \
    cin >> i
void wushangclan()
{
    int n;
    cin >> n;
    vi nums(n);
    get(nums);
    int cntneg=0,cntpos=0;
    fr(i,0,n){
        if(nums[i]<0) cntneg++;
        if(nums[i]>0) cntpos++;
    }
    int ans=0;
    if(cntneg&1){
        cntneg--;
        cntpos++;
        ans++;
        if(cntneg>cntpos){
            if((cntneg-cntpos)&1){
                cout<<ans+(((cntneg-cntpos)/2==0)?2:((cntneg-cntpos)/2)*2)<<endl;
            }else{
                 cout<<ans+(((cntneg-cntpos)/2)==1?2:((cntneg-cntpos)/2)&1?(cntneg-cntpos)/2+1:(cntneg-cntpos)/2)<<endl;
            }
        }else{
                cout<<ans<<endl;
        }
    }else{
 
      if(cntneg>cntpos){
            if((cntneg-cntpos)&1){
                cout<<ans+(((cntneg-cntpos)/2==0)?2:((cntneg-cntpos)/2)*2)<<endl;
            }else{
                 cout<<ans+(((cntneg-cntpos)/2)==1?2:((cntneg-cntpos)/2)&1?(cntneg-cntpos)/2+1:(cntneg-cntpos)/2)<<endl;
            }
        }else{
                cout<<ans<<endl;
        }
 
    }
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