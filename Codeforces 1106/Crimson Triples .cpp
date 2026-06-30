#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long total_ways = 0;
    for (long long b = 1; b <= n; ++b) {
        long long multiples = n / b;
        total_ways += multiples * multiples; 
    }
    
    cout << total_ways << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
