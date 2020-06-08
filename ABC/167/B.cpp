#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int sum = 0;

    if (k >= a) {
        sum += a;
        k -= a;
    } else {
        sum += k;
        k = 0;
    }

    if (k >= b) {
        k -= b;
    } else {
        k = 0;
    }

    if (k >= c) {
        sum -= c;
        k -= c;
    } else {
        sum -= k;
        k = 0;
    }

    cout << sum << endl;

    return 0;
}
