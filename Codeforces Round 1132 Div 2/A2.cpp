#include <bits/stdc++.h>
using namespace std;

long long getarea(int n, vector<long long>& nums) {
    sort(nums.rbegin(), nums.rend());

    long long w = 0;
    long long h = 0;

    for (int i = 0; i < n; i++) {
        if (w <= h) {
            w += nums[i];
        } else {
            h += nums[i];
        }
    }

    return w * h;
}

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> nums(n);
        for (int i = 0; i < n; i++) {
            int exp;
            cin >> exp;
            nums[i] = (1LL << exp);
        }

        long long ans = getarea(n, nums);
        cout << ans << endl;
    }

    return 0;
}
