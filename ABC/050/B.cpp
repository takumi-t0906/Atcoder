#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> t.at(i);
        sum += t.at(i);
    }

    int m, p, x;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> p >> x;
        cout << sum + (x - t.at(p-1)) << endl;
    }

    return 0;
}
