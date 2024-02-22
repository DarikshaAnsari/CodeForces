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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<"Hello world"<<endl;
        long long n;
        cin>>n;
        vector<long long> v;
        long long i=1;
        long long j=2;
        v.pb(2);
        v.pb(3);
        long long  m=4;
        for(long long i = 2; i < n; i++) {
        v.pb(2 * (i - 1) + m);
        m=m+3;
        }

        for(long long i = 0; i < n; i++) {
          cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}