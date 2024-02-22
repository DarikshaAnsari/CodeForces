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
    vi a(n);
    vi b(n);
    vector<set<int>> st;
    vector<pi> c;
    fr(i,0,n){
        cin>>a[i];
    }
    fr(i,0,n){
        cin>>b[i];
    }
    fr(i,0,n){
        c.pb({a[i],b[i]});
    }
    int k=0;
    vector<int> ans;
    sort(c.begin(),c.end());
    fr(i,0,n){
        a[i]=c[i].f;
        b[i]=c[i].s;
        ans.pb(0);
    }
    fr(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    fr(i,0,n){
        cout<<b[i]<<" ";
    }
    cout<<endl;
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