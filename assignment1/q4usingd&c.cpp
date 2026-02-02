#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, int l, int r) {
    if (l == r) return a[l];

    int m = (l + r) / 2;

    int left = solve(a, l, m);
    int right = solve(a, m + 1, r);

    int sum = 0, left_max = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += a[i];
        left_max = max(left_max, sum);
    }

    sum = 0;
    int right_max = INT_MIN;
    for (int i = m + 1; i <= r; i++) {
        sum += a[i];
        right_max = max(right_max, sum);
    }

    return max({left, right, left_max + right_max});
}

int main() {
    vector<int> a = {-2, -5, 6, -2, -3, 1, 5, -6};
    cout << solve(a, 0, a.size() - 1);
    return 0;
}
