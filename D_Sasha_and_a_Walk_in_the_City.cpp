#include <iostream>
#include <vector>
 
using namespace std;
 
const int MOD = 998244353;
 
vector<vector<int>> adj;
vector<vector<int>> dp;
 
void dfs(int u, int p) {
    dp[u][0] = 1;
    dp[u][1] = 1;
 
    for (int v : adj[u]) {
        if (v == p) continue;
 
        dfs(v, u);
 
        vector<int> temp(3, 0);
        for (int i = 0; i <= 2; i++) {
            for (int j = 0; j <= 2 - i; j++) {
                temp[i + j] = (temp[i + j] + 1LL * dp[u][i] * dp[v][j]) % MOD; // Applying modulo operation here
            }
        }
 
        for (int i = 0; i <= 2; i++) {
            dp[u][i] = temp[i];
        }
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        adj.clear();
        adj.resize(n + 1);
 
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
 
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        dp.clear();
        dp.resize(n + 1, vector<int>(3, 0));
 
        dfs(1, 0);
 
        int ans = 0;
        for (int i = 0; i <= 2; i++) {
            ans = (ans + dp[1][i]) % MOD; // Applying modulo operation here
        }
 
        cout << ans << endl;
    }
 
    return 0;
}
