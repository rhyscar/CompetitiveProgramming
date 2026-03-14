#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

void solve() {
    std::unordered_map<int, int> map;
    int n;
    std::cin >> n;
    std::string answer = "YES";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int input;
            std::cin >> input;
            map[input] += 1;
            if (map[input] > (n - 1) * n) { 
                answer = "NO";
            }
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