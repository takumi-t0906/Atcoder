#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1) {
        cout << 0 << endl;
        return 0;
    }

    if (a == b and b == c) {
        cout << -1 << endl;
        return 0;
    }

    int tmp_a, tmp_b, cnt = 0;
    while (1) {
        if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1) break;
        tmp_a = b / 2 + c / 2;
        tmp_b = a / 2 + c / 2;
        c = a / 2 + b / 2;
        a = tmp_a;
        b = tmp_b;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
