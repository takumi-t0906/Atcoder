#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m, 0);
    int tmp, type;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        for (int j = 0; j < tmp; j++) {
            cin >> type;
            a.at(type-1)++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (a.at(i) == n) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
