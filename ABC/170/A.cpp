#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, x;

    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x == 0) r = i + 1;
    }

    cout << r << endl;

    return 0;
}
