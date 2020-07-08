#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            x += a.at(i);
        } else {
            y += a.at(i);
        }
    }

    cout << x - y << endl;

    return 0;
}
