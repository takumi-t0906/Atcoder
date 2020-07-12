#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int tmp = b;
    while (tmp) {
        tmp /= 10;
        a *= 10;
    }

    int sum = a + b;
    bool r = false;
    for (int i = 1; i <= sqrt(100100); i++) {
        if (i * i == sum) r = true;
    }

    if (r) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
