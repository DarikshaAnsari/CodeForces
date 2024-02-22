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
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<5;i++){
        if(s[i]=='A'){
            a++;
        }else{
            b++;
        }
    }
    if(a>b){
        cout<<"A"<<endl;
    }else{
        cout<<"B"<<endl;
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