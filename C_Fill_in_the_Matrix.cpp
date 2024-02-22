#include <iostream>
#include <vector>

void solve() {
    int n, m;
    std::cin >> n >> m;
    if (m == 1) {
        std::cout << 0 << std::endl;
    } else if (n - m < -1) {
        std::cout << n + 1 << std::endl;
    } else {
        std::cout << m << std::endl;
    }

    std::vector<int> ar(m);
    for (int i = 0; i < m; ++i) {
        ar[i] = i;
    }

    for (int i = 0; i < std::min(m - 1, n); ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << ar[(i + j) % m] << ' ';
        }
        std::cout << std::endl;
    }

    if (n > m - 1) {
        for (int k = 0; k < n - m + 1; ++k) {
            for (int i = 0; i < m; ++i) {
                std::cout << ar[i] << ' ';
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}