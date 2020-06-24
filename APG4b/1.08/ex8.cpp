#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    int price;
    string text;

    if (p == 1) {
        cin >> price;
    }

    if (p == 2) {
        cin >> text >> price;
    }

    int N;
    cin >> N;

    if (p == 2) cout << text << "!" << endl;
    cout << price * N << endl;

    return 0;
}
