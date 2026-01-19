#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = a.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            ans = max(ans, sum);
        }
    }
    
    cout << ans;
}
