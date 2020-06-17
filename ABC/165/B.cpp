#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;
    cin >> x;

    long long m = 100;
    int y = 0;

    while (m < x) {
        m *= 1.01;
        ++y;
    }

    cout << y << endl;

    return 0;
}
