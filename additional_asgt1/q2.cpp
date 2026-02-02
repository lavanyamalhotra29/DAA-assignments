#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& a, int l, int r) {
    if (l == r) return 1;
    int m = (l + r) / 2;
    int x = solve(a, l, m);
    int y = solve(a, m + 1, r);

    vector<int> left, right;
    for (int i = l; i <= m; i++) left.push_back(a[i]);
    for (int i = m + 1; i <= r; i++) right.push_back(a[i]);

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int i = 0, j = 0, best = 0;
    while (i < left.size() && j < right.size()) {
        if (abs(left[i] - right[j]) <= 10) {
            best++;
            i++; j++;
        } else if (left[i] < right[j]) i++;
        else j++;
    }
    return max({x, y, best});
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    cout << solve(a, 0, n - 1);
}
