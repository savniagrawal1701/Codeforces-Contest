#include <bits/stdc++.h>

using namespace std;

long long solve(long long n) {
    if (n % 2 == 0) {
        return (n/2)*(n/2);
    } else {
        return ((n -1) / 2)*((n+1) / 2);
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            long long n;
            cin >> n;
            cout << solve(n) << endl;
        }
    }
    
    return 0;
}