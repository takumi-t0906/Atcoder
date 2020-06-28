#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool odd = false;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 1) odd = true;
    }

    int c = 0;
    if (!odd) {
        while (1) {
            c++;
            for (int i = 0; i < n; i++) {
                a[i] /= 2;
                if (a[i] % 2 == 1) {
                    odd = true;
                    break;
                }
            }
            if (odd) break;
        }
    }

    cout << c << endl;

    return 0;
}
