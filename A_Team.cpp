#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int m=0;
        REP(i,0,3){
            int k;
            cin>>k;
            if(k==1){
                m++;
            }
        }
            if(m>=2){
                count++;
            }
    }
    cout<<count<<endl;
    return 0;
}