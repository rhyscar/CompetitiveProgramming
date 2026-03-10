#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    // Read input for a single test case here
    int x;
    std::cin >> x;
    int ans = -1;

    int n;
    std::cin >> n;
    
    // Your logic goes here
    if (n % 2 == 0) {
        ans = 0;
    } else {
        ans = x;
    }
    
    std::cout << ans << "\n"; // Use "\n" instead of std::endl for speed
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