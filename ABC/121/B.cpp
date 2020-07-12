#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b.at(i);

    int cnt = 0, a, sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> a;
            sum += a * b.at(j);
        }
        if (sum + c > 0) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
