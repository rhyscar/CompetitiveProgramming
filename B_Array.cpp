#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        int smaller = 0;
        int larger = 0;
        for (int j = i + 1; j < n; ++j) {
            if (v[i] > v[j]) {
                ++smaller;
            } else if (v[j] > v[i]) {
                ++larger;
            }
        }
        std::cout << std::max(smaller, larger) << " ";
    }
    std::cout << "\n";
    
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