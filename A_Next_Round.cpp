#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <climits>

std::vector<int> findMinLengthAscendingSubsequence(std::vector<int>& arr) {
    int n = arr.size();
    std::unordered_map<int, int> lastIndex;
    std::vector<int> subsequence;
    int minLength = INT_MAX;
    int subseqStart = 0;

    for (int i = 0; i < n; ++i) {
        lastIndex[arr[i]] = i;

        if (lastIndex.size() == subsequence.size()) {
            int start = INT_MAX;

            for (const auto& pair : lastIndex) {
                start = std::min(start, pair.second);
            }

            if (i - start + 1 < minLength) {
                minLength = i - start + 1;
                subseqStart = start;
            }
        }
    }

    if (minLength == INT_MAX) {
        return {-1};
    }

    for (int i = subseqStart; i < subseqStart + minLength; ++i) {
        subsequence.push_back(arr[i]);
    }

    return subsequence;
}

int main() {
    std::vector<int> arr = {2, 1, 3, 1, 4, 1, 3};
    std::vector<int> result = findMinLengthAscendingSubsequence(arr);

    if (result[0] == -1) {
        std::cout << "[-1]" << std::endl;
    } else {
        std::cout << "[";
        for (int i = 0; i < result.size(); ++i) {
            std::cout << result[i];
            if (i < result.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
