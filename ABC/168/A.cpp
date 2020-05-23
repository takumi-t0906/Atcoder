#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    switch (n % 10) {
        case 3:
            s = "bon";
            break;
        case 0:
        case 1:
        case 6:
        case 8:
            s = "pon";
            break;
        default:
            s = "hon";
            break;
    }

    cout << s << endl;
}


