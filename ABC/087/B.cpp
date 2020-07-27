#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int cnt = 0;
    for (int i = 0; i <= 50 * c; i += 50) {
        for (int j = 0; j <= 100 * b; j += 100) {
            for (int k = 0; k <= 500 * a; k += 500) {
                if (x == i + j + k) cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
