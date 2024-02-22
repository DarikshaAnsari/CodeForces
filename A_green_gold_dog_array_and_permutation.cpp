#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <map> 

using namespace std; 

void solve(int n, vector<int> a) { 
    vector<pair<int, int>> v; 
     
    for (int i = 0; i < n; ++i) 
        v.push_back({a[i], i}); 
     
    sort(v.begin(), v.end()); 
     
    int c = n; 
    map<int, int> m; 
     
    for (auto x : v) 
        m[x.second] = (c--); 
     
    for (int i = 0; i < n; ++i) { 
        cout << m[i] << ' '; 
    } 
     
    cout << endl; 
} 

int main() { 
    int t;
    cin>>t;
    while(t--){
    int n; 
    cin >> n; 
     
    vector<int> a(n); 
     
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
    } 
     
    solve(n, a); 
    }
     
    return 0; 
}