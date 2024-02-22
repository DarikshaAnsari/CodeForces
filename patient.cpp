#include <bits/stdc++.h>
#include <vector>

using namespace std;

unordered_map<string, int> memo;

int recur_cost(const vector<int>& lst, int x, int y, int pos, int curr_cost, int count) {
    int minm_cost = INT_MAX;
    string key = to_string(pos) + "|" + to_string(count);

    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    if (pos >= lst.size() && count == 0) {
        return curr_cost;
    }

    if (pos >= lst.size()) {
        return minm_cost;
    }

    if (count == 0) {
        return curr_cost;
    }

    int curr = recur_cost(lst, x, y, pos + y, lst[pos] + curr_cost, count - 1);
    int skip_curr = recur_cost(lst, x, y, pos + 1, 0, x);
    minm_cost = min(minm_cost, min(curr, skip_curr));
    memo[key] = minm_cost;
    return minm_cost;
}

int minm_rehab_cost_r(const vector<int>& lst, int x, int y) {
    memo.clear();
    return recur_cost(lst, x, y, 0, 0, x);
}

int main() {
    vector<int> arr = {4, 2, 5,4,3,5,1,4,2,7};
    int x = 3;
    int y = 2;
    cout<<minm_rehab_cost_r(arr,x,y);
    return 0;
}
