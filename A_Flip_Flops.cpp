#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void solve() {
    long long n; // num of monsters
    std::cin >> n;
    long long c; // num of combat power
    std::cin >> c;
    long long k; // flip flops can throw
    std::cin >> k;
    std::vector<long long> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        if (v[i] > c) {
            break;
        }
        long long diff = std::min(k, c - v[i]);
        v[i] += diff;
        k -= diff;

        c += v[i];
    }
    std::cout << c << "\n"; // Use "\n" instead of std::endl for speed
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