#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string res = "No";
    for (int i = 0; i < 3; i++) {
        if (n % 10 == 7) res = "Yes";
        n /= 10;
    }

    cout << res << endl;

    return 0;
}
