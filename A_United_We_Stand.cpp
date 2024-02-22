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
    vl v(n);
    get(v);
    vl b,c;
    int maxi=*max_element(v.begin(),v.end());
    fr(i,0,n){
        if(v[i]==maxi){
            c.pb(v[i]);
        }else{
            b.pb(v[i]);
        }
    }
    if(b.size() && c.size()){
        cout<<b.size()<<" "<<c.size()<<endl;
        fr(i,0,b.size()){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        fr(i,0,c.size()){
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
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