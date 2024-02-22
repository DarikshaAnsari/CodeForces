#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void berserkMonsters(int t, vector<vector<int>>& testCases) {
    for (int i = 0; i < t; ++i) {
        int n = testCases[i][0];
        vector<int> attack(testCases[i].begin() + 1, testCases[i].begin() + 1 + n);
        vector<int> defense(testCases[i].begin() + 1 + n, testCases[i].end());

        vector<int> leftDamages(n, 0), rightDamages(n, 0);
        priority_queue<pair<int, int>> heap;

        for (int j = 0; j < n; ++j) {
            heap.push({-defense[j], j});
        }

        for (int j = 0; j < n; ++j) {
            // Calculate damage to the left
            while (!heap.empty() && -heap.top().first < attack[j]) {
                int idx = heap.top().second;
                heap.pop();
                leftDamages[j] += 1;
            }

            // Calculate damage to the right
            if (!heap.empty()) {
                rightDamages[j] += 1;
            }

            // Update heap with the remaining monsters
            heap.push({-defense[j], j});
        }

        // Print the number of monsters that die in each round
        for (int j = 0; j < n; ++j) {
            cout << leftDamages[j] + rightDamages[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    vector<vector<int>> testCases;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        vector<int> testCase(2 * n + 1);

        for (int j = 1; j <= n; ++j) {
            cin >> testCase[j];
        }

        for (int j = 1 + n; j <= 2 * n; ++j) {
            cin >> testCase[j];
        }

        testCases.push_back(testCase);
    }

    // Call the function and print the output
    berserkMonsters(t, testCases);

    return 0;
}
