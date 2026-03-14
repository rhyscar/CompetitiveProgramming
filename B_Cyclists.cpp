#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>

void solve() {
    std::deque<int> dq;
    int n; // number of cards
    int k; // playable at a time
    int p; // win condition position (1 indexed)
    int m; // total energy
    std::cin >> n >> k >> p >> m;
    for (int i = 0; i < n; ++i) {
        int input;
        std::cin >> input;
        dq.push_back(input);
    }

    
    
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