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
    ll a,b,c;
    cin>>a>>b>>c;
   if(c&1){
      if(a>=b){
        cout<<"First"<<endl;
      }else{
        cout<<"Second"<<endl;
      }
   }else{
      if(a>b){
        cout<<"First"<<endl;
      }else{
        cout<<"Second"<<endl;
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