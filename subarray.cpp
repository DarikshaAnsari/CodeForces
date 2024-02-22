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
void solve(string s,int ind,string& si){
    if(ind==s.size()){
        return;
    }
   for(int i=ind;i<s.size();i++){
        si.push_back(s[i]);
        cout<<si<<endl;
        solve(s,i+1,si);
        si.pop_back();
   }
    
}
int main()
{
    string s;
    cin>>s;
    string si="";
    solve(s,0,si);
    return 0;
}