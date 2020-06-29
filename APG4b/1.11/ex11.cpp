#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    string op;
    int b;
    for (int i = 1; i <= n; i++) {
        cin >> op >> b;
        if (op == "+") a += b;
        if (op == "-") a -= b;
        if (op == "*") a *= b;
        if (op == "/") {
            if (b == 0) {
                cout << "error" << endl;
                break;
            }
            a /= b;
        }
        cout << i << ":" << a << endl;
    }

    return 0;
}
