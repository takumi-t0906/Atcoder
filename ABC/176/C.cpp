#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    long long sum = 0;
    int tmp;
    for (int i = 1; i < n; i++) {
        if (a.at(i) < a.at(i-1)) {
            tmp = a.at(i-1) - a.at(i);
            a.at(i) += tmp;
            sum += tmp;
        }
    }

    cout << sum << endl;

    return 0;
}
