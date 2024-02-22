#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (ll i = a; i <= b; i++)
int tatto(int a, int b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
            ans = ans + a;
        a = a + a;
        b = b >> 1;
    }
    return ans;
}
int potty(vector<int> arr, int n, int x)
{
    int lo = 0;
    int hi = n - 1;
    int mid = (hi + lo) / 2;
    while (hi - lo > 1)
    {
        if (arr[mid] < x)
        {
            lo = mid + 1;
            mid = (hi + lo) / 2;
        }
        else
        {
            hi = mid;
            mid = (hi + lo) / 2;
        }
    }
    if (arr[lo] == x)
    {
        return lo;
    }
    else if (arr[hi] == x)
    {
        return hi;
    }
    else
    {
        return -1;
    }
}
void wushangclan()
{
    ll x,n;
    cin>>x>>n;
    set<ll> s;
    int m=0;
    ll k=9;
    ll p=sqrt(x);
    fr(i,1,p){
        if(x%i==0){
           s.insert(i);
            k--;
            s.insert(x/i);
        }else{
           k++;
        }
    }
    auto ind=s.lower_bound(x/n);
    if(k==10){
        m=60;
    }
    if(*ind>x/n){
        ind--;
        m++;
    }
    ll ans=*ind;
    cout<<ans<<endl;

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