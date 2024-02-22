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
    vector<int> v(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size()==1){
        cout<<"NO"<<endl;
    }
    else{
        vector<int> ans1,ans2;
        for(auto x:m){
            ans1.push_back(x.first);
            for(int i=2;i<=x.second;i++){
                ans2.push_back(x.first);
            }
        }
        reverse(ans1.begin(),ans1.end());
        cout<<"YES"<<endl;
        for(auto x:ans1){
            cout<<x<<" ";
        }
        for(auto x:ans2){
            cout<<x<<" ";
        }
        cout<<endl;
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