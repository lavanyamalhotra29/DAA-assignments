#include <bits/stdc++.h>
using namespace std;

bool ok(vector<int>& a, int m, int x) {
    int cnt = 1, cur = 0;
    for (int v : a) {
        if ((cur | v) > x) {
            cnt++;
            cur = v;
        } else cur |= v;
    }
    return cnt <= m;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    int l = 0, r = (1 << 30), ans = r;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ok(a, m, mid)) ans = mid, r = mid - 1;
        else l = mid + 1;
    }
    cout << ans;
}
