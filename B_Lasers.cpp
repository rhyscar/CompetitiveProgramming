#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

void solve() {
    // Read input for a single test case here
    int answer = 0;
    int n;
    std::cin >> n;
    int m;
    std::cin >> m;
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        if (temp > y) {
            break;
        } else {
            ++answer;
        }
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < m; ++i) {
        int temp;
        std::cin >> temp;
        if (temp > x) {
            break;
        } else {
            ++answer;
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