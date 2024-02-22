#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> permutation(n);
        vector<int> segment_values(k);

        segment_values[0] = n;
        segment_values[1] = 1;

        for (int i = 0; i < k; i++) {
            int sign = (i % 2 == 0 ? -1 : 1);
            int move = 0;
            int min_val = n + 1, max_val = 0;

            for (int j = i; j < n; j += k) {
                permutation[j] = segment_values[i] + sign * move++;
                max_val = max(max_val, permutation[j]);
                min_val = min(min_val, permutation[j]);
            }

            if (sign == -1) {
                if (i + 2 < k) {
                    segment_values[i + 2] = min_val - 1;
                }
            } else {
                if (i + 2 < k) {
                    segment_values[i + 2] = max_val + 1;
                }
            }
        }

        for (int &it : permutation) {
            cout << it << ' ';
        }
        cout << '\n';
    }

    return 0;
}
