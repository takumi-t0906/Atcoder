#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int res = 0;
    int cnt = (s.at(0) == 'R' ? 1 : 0);
    for (int i = 1; i < 3; i++) {
        if (s.at(i-1) == 'R' && s.at(i) == 'R') {
            cnt++;
        } else {
            if (res < cnt) res = cnt;
            if (s.at(i) == 'R') {
                cnt = 1;
            } else {
                cnt = 0;
            }
        }
    }

    cout << max(res,cnt) << endl;

    return 0;
}
