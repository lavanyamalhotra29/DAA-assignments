#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;
    int l = 0, r = arr.size() - 1, idx = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) {
            idx = m;
            break;
        } else if (arr[m] < target) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout <<"element found at "<<idx;
}
