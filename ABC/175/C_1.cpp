#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, k, d;
    cin >> x >> k >> d;
    x = (x < 0 ? -x : x);

    long long y, tmp;
    tmp = x / d;
    if (k - tmp <= 0) {
        cout << x - k * d << endl;
        return 0;
    }
    y = x - tmp * d;
    if ((k - tmp) % 2 == 0) {
        cout << abs(y) << endl;
    } else {
        cout << abs(y-d) << endl;
    }

    return 0;
}
