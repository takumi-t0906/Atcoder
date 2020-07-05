#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    int tmp, l = 0, c = 0;
    for (int i = 0; i < n; i++) {
        c++;
        tmp = a.at(l);
        if (tmp == 2) break;
        l = tmp - 1;
    }

    if (tmp == 2) {
        cout << c << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
