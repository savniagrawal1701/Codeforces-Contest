//Optimal purchase 
#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
 
    if (3 * a <= b) {
        cout << n * a << "\n";
    } else {
        long long g = n / 3;
        long long rem = n % 3;
        
        long long ans = (g * b) + min(rem * a, b);
        cout << ans << "\n";
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