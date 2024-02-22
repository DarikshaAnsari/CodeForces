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
    cin>>n;
    vi v(n);
    get(v);
    if(n<=2){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i=0;i<=n-3;i++){
        if(v[i]+v[i+1]!=v[i+1]+v[i+2]){
           cout<<"No"<<endl;
           return;
        }
    }
    cout<<"Yes"<<endl;
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
