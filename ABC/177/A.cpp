#include <bits/stdc++.h>
using namespace std;

int main() {
    double d, t, s;
    cin >> d >> t >> s;

    double tmp = d / s;
    string res = "No";
    if (tmp <= t) res = "Yes";

    cout << res << endl;

    return 0;
}
