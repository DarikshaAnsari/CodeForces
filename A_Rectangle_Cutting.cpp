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
    ll a,b;
    cin>>a>>b;
    if(a%2==0 && b%2==0){
        cout<<"Yes"<<endl;
    }else if(a&1 && b&1){
        cout<<"No"<<endl;
    }else{
        int q=a%2==0?b:a;
        int p=a%2==0?a/2:b/2;
        if(p==q){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
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