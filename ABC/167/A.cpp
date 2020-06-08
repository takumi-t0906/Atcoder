#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t, u;
    cin >> s >> t;

    u = t.erase(s.size());

    if(s == u) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
