#include<bits/stdc++.h>
using namespace std;


int main(){
    int ans=0;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.find("++")==s.size()-2 || s.find("++")==0){
           ans++;
        }else{
            ans--;
        }
    }
    cout<<ans<<endl;
return 0;
}