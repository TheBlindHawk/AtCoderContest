#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector< vector<int> > dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] * (j - A[i - 1]) + dp[i - 1][j - 1] * A[i - 1]) % MOD;
        }
    }
    
    cout << dp[N][N] << endl;

    return 0;
}
