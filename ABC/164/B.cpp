#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string res;

    while (1) {
        c -= b;
        if (c <= 0) {
            res = "Yes";
            break;
        }
        a -= d;
        if (a <= 0) {
            res = "No";
            break;
        }
    }

    cout << res << endl;

    return 0;
}
