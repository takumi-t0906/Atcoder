#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    bool c = false;

    for (; a <= b; a++) {
        if (a % k == 0) {
            c = true;
            break;
        }
    }

    if (c) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }

    return 0;
}
