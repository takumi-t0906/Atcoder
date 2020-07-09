#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x.at(i);

    sort(x.begin(), x.end());
    int sum = 0, tmp;
    for (int i = x.at(0); i < x.at(n-1); i++) {
        tmp = 0;
        for (int j = 0; j < n; j++) {
            tmp += (x.at(j) - i) * (x.at(j) - i);
        }
        if (tmp < sum || sum == 0) sum = tmp;
    }
            
    cout << sum << endl;

    return 0;
}
