#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    long long cost1 = 0;
    bool possible1 = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] < b[i]) {
            possible1 = false;
            break;
        }
        cost1 += (a[i] - b[i]);
    }
    if (!possible1) cost1 = 1e18;

    vector<int> a_sorted = a;
    vector<int> b_sorted = b;
    sort(a_sorted.begin(), a_sorted.end());
    sort(b_sorted.begin(), b_sorted.end());

    long long cost2 = c;
    bool possible2 = true;
    for (int i = 0; i < n; ++i) {
        if (a_sorted[i] < b_sorted[i]) {
            possible2 = false;
            break;
        }
        cost2 += (a_sorted[i] - b_sorted[i]);
    }
    if (!possible2) cost2 = 1e18;

    long long ans = min(cost1, cost2);
    if (ans >= 1e18) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
