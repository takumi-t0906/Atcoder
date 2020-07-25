#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    sort(a.begin(), a.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x - a.at(i) >= 0) {
            if (i+1 == n && x != a.at(i)) break;
            x -= a.at(i);
            cnt++;
        } else {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}
