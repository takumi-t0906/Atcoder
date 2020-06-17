#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;

    int tmp = (a / k) * k;
    if (a == tmp || (a <= tmp+k && tmp+k <= b)) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }

    return 0;
}
