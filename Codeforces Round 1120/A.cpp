#include <bits/stdc++.h>
 
using namespace std;
 
string solve(int n, const vector<int>& a) {
    int c0 = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            c0++;
        }
    }
    
    int bessie_moves = n / 2;
    
    if (c0 <= bessie_moves) {
        return "Bessie";
    } else {
        return "Elsie";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, a) << endl;
    }
    
    return 0;
}

