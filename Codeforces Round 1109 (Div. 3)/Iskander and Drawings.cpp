#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int maxi= 0;
    int cur= 0;

    for (char c : s) {
        if (c == '#') {
            cur++;
            maxi = max(maxi, cur);
        } else {
            cur = 0;
        }
    }
    
  
    int ans = (maxi + 1) / 2;
    cout << ans << "\n";
}

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
