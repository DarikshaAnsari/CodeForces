#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define for(i, a, b) for (int i = a; i < b; i++)

void capital(string& s){
     for(i,0,s.length()){
        if(s[i]>=97){
            s[i]=s[i]-32;
        }
     }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    capital(s1);
    capital(s2);
    if(s1==s2){
        cout<<0<<endl;
    }else {
        for(i,0,s1.length()){
            if(s1[i]>s2[i]){
                 cout<<1<<endl;
                 break;
            }
            else if(s2[i]>s1[i]){
                cout<<-1<<endl;
                break;
            }
        }
    }
    return 0;
}