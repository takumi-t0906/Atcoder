#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l.at(i);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (l.at(i) != l.at(j) 
                        && l.at(i) != l.at(k) 
                        && l.at(j) != l.at(k)) {
                    if (l.at(i) + l.at(j) > l.at(k) &&
                            l.at(j) + l.at(k) > l.at(i) &&
                            l.at(k) + l.at(i) > l.at(j)) {
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
