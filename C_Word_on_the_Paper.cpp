#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


int main(){
    int t;
    cin>>t;
    while(t--){
   vector<vector<char>> v(8,vector<char>(8, ' '));
    string s;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>v[i][j];
            if(v[i][j]!='.'){
                s+=v[i][j];
            }
        }
    }
    cout<<s<<endl;
    }
   return 0;
}