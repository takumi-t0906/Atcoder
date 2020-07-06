#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    sort(a.begin(), a.end());

    int x = 0, y = 0;
    bool t = true;
    for (int i = n-1; i >= 0; i--) {
        if (t) {
            x += a.at(i);
            t = false;
        } else {
            y += a.at(i);
            t = true;
        }
    }

    cout << x - y << endl;

    return 0;
}
