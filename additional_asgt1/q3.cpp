#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;

    sort(a.begin(), a.end());
    int k = n - (n - 2);
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];
    cout << sum;
}
