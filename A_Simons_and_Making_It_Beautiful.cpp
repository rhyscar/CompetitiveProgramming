#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    // Read input for a single test case here
    int n;
    std::cin >> n;
    
    // Your logic goes here
    int max = 0;
    int uglyCount = 0;
    int maxPos = -1;
    int beg = 0;
    bool begFound = false;
    std::vector<int> nums(n);
    
    
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        if (max < nums[i]) {
            max = nums[i];
            maxPos = i;
        }
        if (i + 1 == max) {
            uglyCount++;
            if (!begFound) {
                begFound = true;
                beg = i;
            }
        }
    }

    if (uglyCount > 1) {
        std::swap(nums[beg], nums[maxPos]);
    }

    for (int i = 0; i < n; i++) {
        std::cout << nums[i] << (i == n - 1 ? "" : " ");
    }
        std::cout << "\n";
    // std::cout << answer << "\n"; // Use "\n" instead of std::endl for speed
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