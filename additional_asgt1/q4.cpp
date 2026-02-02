#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i; j < n; j++) {
            if (a[j] > a[i]) cnt++;
            if (cnt == k) {
                ans += a[i];
                break;
            }
        }
    }
    cout << ans;
}
