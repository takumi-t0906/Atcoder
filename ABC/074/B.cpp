#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x <= k - x) {
            sum += x;
        } else {
            sum += k - x;
        }
    }

    cout << sum * 2 << endl;

    return 0;
}
