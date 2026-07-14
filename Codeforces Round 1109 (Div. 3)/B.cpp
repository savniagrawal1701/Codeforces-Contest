#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long current_prefix_sum = 0;
    bool possible = true;
    
    for (int i = 1; i <= n; i++) {
        long long books;
        cin >> books;
        
        current_prefix_sum += books;
        
        long long min_required = (1LL * i * (i + 1)) / 2;
        
        if (current_prefix_sum < min_required) {
            possible = false;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
