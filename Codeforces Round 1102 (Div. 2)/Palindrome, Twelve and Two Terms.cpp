#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
bool isPalindrome(ll n) {
    string s = to_string(n);
    string rs = s;
    reverse(rs.begin(), rs.end());
    return s == rs;
}
 
void solve() {
    ll n;
    cin >> n;
 
    for (ll a = 0; a <= n; ++a) {
        ll b = n - a;
        if (isPalindrome(a) && b % 12 == 0) {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << -1 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
