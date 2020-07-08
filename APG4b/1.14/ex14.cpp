#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int min_n = min(min(a,b),c);
    int max_n = max(max(a,b),c);

    cout << max_n - min_n << endl;

    return 0;
}
