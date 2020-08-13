#include <bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
long long dp[100010];

int main() {
    int n;
    cin >> n;

    long long a[100010];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < 100010; i++) dp[i] = INF;
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        chmin(dp[i], dp[i-1] + abs(a[i] - a[i-1]));
        if (i >= 2) chmin(dp[i], dp[i-2] + abs(a[i] - a[i-2]));
    }

    cout << dp[n-1] << endl;

    return 0;
}
