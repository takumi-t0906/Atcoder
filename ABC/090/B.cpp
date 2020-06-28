#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = 0, tmp;
    for (int i = a; i <= b; i++) {
        tmp = i % 100;
        tmp = 10 * (tmp % 10) + tmp / 10;
        if (i / 1000 == tmp) c++;
    }

    cout << c << endl;
    
    return 0;
}
