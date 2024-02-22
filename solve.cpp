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
    vector<pair<int,int>> v(4);
    int maxi=INT_MIN,mini=INT_MAX;
    fr(i,0,4){
        cin>>v[i].first;
        cin>>v[i].second;
        maxi=max(maxi,v[i].first);
        mini=min(mini,v[i].first);
    }
    cout<<(maxi-mini)*(maxi-mini)<<endl;
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