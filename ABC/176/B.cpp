#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    string res = "No";
    long long sum = 0;
    for (int i = 0; i < n.size(); i++) {
        sum += (n.at(i) - '0');
    }

    if (sum % 9 == 0) res = "Yes";

    cout << res << endl;

    return 0;
}
