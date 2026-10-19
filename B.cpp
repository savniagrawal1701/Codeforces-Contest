#include <bits/stdc++.h>

using namespace std;

vector<int> solve(int n, string s) {
    stack<int> st;
    vector<bool> printed(n + 1, false);
    
    for (int i = 0; i < n; ++i) {
        int doc = i + 1;
        if (s[i] == '1') {
            st.push(doc);
        } else if (s[i] == '2') {
            if (!st.empty()) {
                printed[st.top()] = true;
                st.pop();
            } else {
                printed[doc] = true;
            }
        } else if (s[i] == '3') {
            printed[doc] = true;
        }
    }
    
    vector<int> not_printed;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            not_printed.push_back(i);
        }
    }
    
    return not_printed;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            vector<int> ans = solve(n, s);
            
            cout << ans.size() << "\n";
            for (int x : ans) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}