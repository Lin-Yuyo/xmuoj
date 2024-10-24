#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
const int MOD = 1e9 + 7;
int dp[MAXN][MAXN][2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) dp[1][i][0] = 1;
    for (int i = 2; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= k; j++) {
            sum = (sum + dp[i-1][j][0] + dp[i-1][j][1]) % MOD;
        }
        for (int j = 1; j <= k; j++) {
            dp[i][j][0] = (sum - dp[i-1][j][0] - dp[i-1][j][1] + MOD) % MOD;
            dp[i][j][1] = dp[i-1][j][0];
        }
    }
    long long ans = 0;
    for (int i = 1; i <= k; i++) {
        ans = (ans + dp[n][i][0] + dp[n][i][1]) % MOD;
    }
    cout << ans << endl;
    return 0;
}