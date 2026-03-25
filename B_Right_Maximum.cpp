#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> a(n);
    long long answer = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    long long mx = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= mx) {
            ++answer;
            mx = std::max(mx, a[i]);
        }
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