#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

void solve() {
    std::vector<long long> oddNumbers;
    std::vector<long long> evenNumbers;
    int n;
    std::cin >> n;
    long long answer = 0;
    
    for (int i = 0; i < n; ++i) {
        long long input;
        std::cin >> input;
        if (input % 2 == 0) {
            evenNumbers.push_back(input);
        } else {
            oddNumbers.push_back(input);
        }
    }

    std::sort(oddNumbers.begin(), oddNumbers.end());

    int left = 0;
    int right = oddNumbers.size() - 1;
    if (!oddNumbers.empty()) {
        long long largest = oddNumbers[right];
        answer += largest;
        --right;
        for (int i = 0; i < evenNumbers.size(); ++i) {
            answer += evenNumbers[i];
        }
    }

    while (left < right) {
        ++left;
        long long largest = oddNumbers[right];
        answer += largest;
        --right;
    }

    std::cout << answer << "\n"; // Use "\n" instead of std::endl for speed
}

int main() {
    // Fast I/O: This is crucial for avoiding Time Limit Exceeded (TLE)
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t = 1;
    std::cin >> t; // Reads the number of test cases. 
                   // If a problem doesn't have multiple test cases, just comment this line out.
    
    while (t--) {
        solve();
    }

    return 0;
}