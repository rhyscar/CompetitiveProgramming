#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    int n;
    std::cin >> n;
    int max = 0;
    int min = 0;
    std::string s;
    std::cin >> s;
    for (int i = 1; i < n - 1; ++i) {
        if (s[i - 1] == '1' && s[i + 1] == '1') {
            s[i] = '1';
        }
    }
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++max;
        }
    }
    for (int i = 1; i < n - 1; ++i) {
        if (s[i - 1] == '1' && s[i + 1] == '1') {
            s[i] = '0';
        }
    }
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++min;
        }
    }
    
    
    
    std::cout << min << " " <<  max << "\n"; // Use "\n" instead of std::endl for speed
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