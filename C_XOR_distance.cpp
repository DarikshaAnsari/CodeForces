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
    ll a, b, r;
    cin >> a >> b >> r;
    ll temp;
    if (a < b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    bool suck = false;
    ll poi = 0;
    for (int i = 62; i >= 0; i--)
    {
        ll hatt = pow(2, i);
        if (((hatt & a) != (hatt & b)) && !suck)
        {
            suck = true;
        }
        else if (((hatt & a) != (hatt & b)) && (hatt & a) && (poi + hatt <= r))
        {
            poi += hatt;
        }
    }
    cout << abs((a ^ poi)- (b ^ poi)) << endl;
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