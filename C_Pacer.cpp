#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

void solve() {
    // Read input for a single test case here
    int score = 0;
    int n; // number of requirements
    std::cin >> n;
    int m;
    std::cin >> m; // number of total minutes
    int time = 0;
    int side = 0;
    for (int i = 0; i < n; ++i) {
        int a; // current time
        std::cin >> a;
        int b; // current side
        std::cin >> b;
        int j = a - time;

        int diff = abs(b - side);

        if (j % 2 == diff % 2) {
            score += j;
        } else {
            score += j - 1;
        }

        time = a;
        side = b;
    }
    score += m - time;
    
    std::cout << score << "\n"; // Use "\n" instead of std::endl for speed
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