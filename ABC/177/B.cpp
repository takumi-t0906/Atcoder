#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int res = 100000000, tmp;
    for (int i = 0; i <= (s.size()-t.size()); i++) {
        if (s.substr(i, t.size()) == t) {
            cout << 0 << endl;
            return 0;
        } else {
            tmp = 0;
            int index = i;
            for (int j = 0; j < t.size(); j++) {
                if (t.at(j) != s.at(index)) tmp++;
                index++;
            }
            res = min(res,tmp);
        }
    }

    cout << res << endl;

    return 0;
}
