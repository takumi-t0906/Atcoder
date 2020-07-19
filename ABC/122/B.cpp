#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int max = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'A' || s.at(i) == 'C' || s.at(i) == 'G' || s.at(i) == 'T') {
            cnt++;
            if (cnt > max) max = cnt;
        } else {
            cnt = 0;
        }
    }

    cout << max << endl;

    return 0;
}
