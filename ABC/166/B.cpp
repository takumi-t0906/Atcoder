#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    set<int> a;
    int i_tmp;
    int j_tmp;

    for (int i = 0; i < k; i++) {
        cin >> i_tmp;
        for (int j = 0; j < i_tmp; j++) {
            cin >> j_tmp;
            a.insert(j_tmp);
        }
    }

    cout << n - a.size() << endl;

    return 0;
}
