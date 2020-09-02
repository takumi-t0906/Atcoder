#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0, tmp;
    for (int i = 0; i < n-1; i++) {
        cin >> tmp;
        sum += tmp;
    }

    if (m * n - sum <= k) {
        cout << max(m * n - sum, 0) << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
