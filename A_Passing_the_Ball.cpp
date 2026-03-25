#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    int n;
    std::cin >> n;
    std::string s;
    int answer = 1; // always starts at 1 for starting student
    std::cin >> s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L') {
            break;
        }
        ++answer;
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