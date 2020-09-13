#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long x, y;
    x = max(a*c,a*d);
    y = max(b*c,b*d);

    cout << max(x,y) << endl;

    return 0;
}
