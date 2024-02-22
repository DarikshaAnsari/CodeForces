#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x){
   if(x == 2) return false;
   for(int i = 2; i <= x/2; ++i)
      if(x%i==0) return false;
   return true;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; 
    cin>>s; 
    int n=s.length(); 
    int ans=-1; 
    for(int i=0;i<9;i++){ 
        for(int j=i+1;j<9;j++){ 
            int num=s[i]-'0'; 
            num*=10; 
            num+=(s[j]-'0'); 
            if(is_prime(num)){ 
                ans=num; 
            } 
        } 
    } 
    cout<<ans<<endl;
    }
    return 0;
}