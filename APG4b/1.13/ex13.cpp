#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        sum += a.at(i);
    }

    int avg = sum / n;
    int diff = 0;
    for (int i = 0; i < n; i++) {
        diff = a.at(i) - avg;
        cout << (diff < 0 ? -1 * diff : diff) << endl;
    }

    return 0;
}
