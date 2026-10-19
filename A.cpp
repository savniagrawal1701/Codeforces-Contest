#include <bits/stdc++.h>

using namespace std;

pair<int, int> solve(int x0, int y0, int r) {
    return {x0, r + y0};
}

int main() {
    
    int t;
    if (cin >> t) {
        while (t--) {
            int x0, y0, r;
            cin >> x0 >> y0 >> r;
            pair<int, int> ans = solve(x0, y0, r);
            cout << ans.first << " " << ans.second << "\n";
        }
    }
    
    return 0;
}